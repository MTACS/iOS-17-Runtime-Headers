
@interface LSClaimRecord : LSRecord {
    LSBundleRecord * _weakClaimingBundleRecord;
}

@property (readonly) NSArray *URLSchemes;
@property (readonly) LSBundleRecord *_claimingBundleRecord;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) LSBundleRecord *claimingBundleRecord;
@property (nonatomic, readonly) id compatibilityObject;
@property (readonly) bool defaultShareModeCollaboration;
@property (readonly) NSString *handlerRank;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned int role;
@property (readonly) NSArray *typeIdentifiers;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLSchemes;
- (id)URLSchemesWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (void)_LSRecord_resolve_URLSchemes;
- (void)_LSRecord_resolve__claimingBundleRecord;
- (void)_LSRecord_resolve__flags;
- (void)_LSRecord_resolve__localizedName;
- (void)_LSRecord_resolve_handlerRank;
- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_iconResourceBundleURL;
- (void)_LSRecord_resolve_role;
- (void)_LSRecord_resolve_typeIdentifiers;
- (id)_claimingBundleRecord;
- (id)_claimingBundleRecordWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (unsigned long long)_flags;
- (unsigned long long)_flagsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)_localizedName;
- (id)_localizedNameWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)claimingBundleRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultShareModeCollaboration;
- (id)handlerRank;
- (id)handlerRankWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)iconDictionary;
- (id)iconDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)iconResourceBundleURL;
- (id)iconResourceBundleURLWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1;
- (unsigned int)role;
- (unsigned int)roleWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;
- (id)typeIdentifiers;
- (id)typeIdentifiersWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[8]; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg4;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)_IS_iconProvideingRecord;

@end
