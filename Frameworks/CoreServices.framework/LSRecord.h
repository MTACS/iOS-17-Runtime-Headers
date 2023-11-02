
@interface LSRecord : NSObject <LSDetachable, NSCopying, NSDiscardableContent, NSSecureCoding> {
    struct LSContext { 
        _LSDatabase *db; 
    }  _context;
    unsigned int  _discardableContentCounter;
    unsigned int  _intentionallyInvalid;
    void * _resolvedProperties;
    unsigned int  _shared;
    unsigned int  _tableID;
    unsigned int  _unitID;
}

@property (getter=_isShared, setter=_setShared:, nonatomic) bool _shared;
@property (nonatomic, readonly) id compatibilityObject;
@property (readonly) NSUUID *databaseUUID;
@property (readonly) NSData *persistentIdentifier;
@property (nonatomic, readonly) NSURL *visualizerURL;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (bool)hasDatabaseAccess;
+ (void)initialize;
+ (id)new;
+ (void)resolveAllPropertiesOfRecords:(id)arg1 andDetachOnQueue:(id)arg2;
+ (void)resolveAllPropertiesOfRecords:(const id*)arg1 count:(unsigned long long)arg2 andDetachOnQueue:(id)arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_attributedDescription;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_ifAttached:(id /* block */)arg1 else:(id /* block */)arg2;
- (id)_initInvalid;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifier:(id)arg2;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3;
- (bool)_isShared;
- (void)_performBlockWithContext:(id /* block */)arg1;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)_propertyClassesForCoding;
- (void)_removeResolvedPropertyValueForGetter:(SEL)arg1;
- (id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3;
- (void)_resolveAllProperties;
- (id)_resolvedPropertyValueForGetter:(SEL)arg1;
- (id)_resolvedPropertyValueForGetter:(SEL)arg1 nullPlaceholder:(id)arg2;
- (const void*)_resolvingMethods;
- (void)_setResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2;
- (void)_setShared:(bool)arg1;
- (bool)beginContentAccess;
- (id)compatibilityObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseUUID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (void)discardContentIfPossible;
- (void)encodeWithCoder:(id)arg1;
- (void)endContentAccess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1;
- (bool)isContentDiscarded;
- (id)persistentIdentifier;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)arg1;
- (unsigned int)tableID;
- (unsigned int)unitID;
- (id)visualizerURL;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (void)_is_getSequenceNumber:(unsigned long long*)arg1 andUUID:(id*)arg2;
+ (id)_is_resourceTokenForRecords:(id)arg1;

- (bool)_IS_allows1016Sufix;
- (bool)_is_canProvideIconResources;
- (bool)_is_providesPrecomposedIconResources;

@end
