
@interface NSMethodSignature : NSObject {
    unsigned long long  _flags;
    struct NSMethodFrameDescriptor { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; } * _frameDescriptor;
    char * _typeString;
}

@property (readonly) unsigned long long frameLength;
@property (readonly) unsigned long long methodReturnLength;
@property (readonly) const char *methodReturnType;
@property (readonly) unsigned long long numberOfArguments;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (void)initialize;
+ (id)signatureWithObjCTypes:(const char *)arg1;

- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7; BOOL x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned char x25; BOOL x26[0]; }*)_argInfo:(long long)arg1;
- (const char *)_cTypeString;
- (Class)_classForObjectAtArgumentIndex:(long long)arg1;
- (unsigned long long)_flags;
- (struct NSMethodFrameDescriptor { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; }*)_frameDescriptor;
- (id)_initWithROMEntry:(const struct CFMethodSignatureROMEntry { struct NSMethodFrameDescriptor {} *x1; char *x2; unsigned long long x3; }*)arg1;
- (bool)_isAllObjects;
- (bool)_isBlock;
- (bool)_isHiddenStructRet;
- (id)_protocolsForObjectAtArgumentIndex:(long long)arg1;
- (id)_signatureForBlockAtArgumentIndex:(long long)arg1;
- (id)_typeString;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)frameLength;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isOneway;
- (unsigned long long)methodReturnLength;
- (const char *)methodReturnType;
- (unsigned long long)numberOfArguments;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (bool)CKReplyBlockHasErrorParameter;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (unsigned long long)fp_indexOfLastArgumentWithType:(const char *)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (bool)_isCompatibleWithMethodSignature:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (bool)_gkHasReplyBlock;
- (bool)_gkTakesBlockAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_methodSignatureForEmptyMethod;

@end
