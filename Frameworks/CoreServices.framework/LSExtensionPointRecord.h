
@interface LSExtensionPointRecord : LSRecord

@property (readonly) LSPropertyList *SDKDictionary;
@property (readonly) unsigned int TCCPolicy;
@property (readonly) LSApplicationRecord *_EX_parentAppRecord;
@property (readonly) bool _IS_extensionsCanProvideIcon;
@property (readonly) bool _IS_extensionsShouldFallbackToContainerIcon;
@property (nonatomic, readonly) LSExtensionPoint *compatibilityObject;
@property (readonly) unsigned int extensionPointType;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) LSApplicationRecord *parentAppRecord;
@property (readonly) unsigned int platform;
@property (readonly) NSString *version;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (id)enumerator;
+ (id)enumeratorForExtensionPointIdentifier:(id)arg1;
+ (id)enumeratorWithParentApplicationRecord:(id)arg1;
+ (id)extensionPointRecordForCurrentProcess;
+ (id)identifierForCurrentProcess;
+ (bool)isCurrentProcessAnApplicationExtension;
+ (void)setExtensionPointRecordForCurrentProcess:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)SDKDictionary;
- (id)SDKDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (unsigned int)TCCPolicy;
- (unsigned int)TCCPolicyWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (void)_LSRecord_resolve_SDKDictionary;
- (void)_LSRecord_resolve_TCCPolicy;
- (void)_LSRecord_resolve_extensionPointType;
- (void)_LSRecord_resolve_identifier;
- (void)_LSRecord_resolve_name;
- (void)_LSRecord_resolve_parentAppRecord;
- (void)_LSRecord_resolve_platform;
- (void)_LSRecord_resolve_version;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (unsigned int)extensionPointType;
- (unsigned int)extensionPointTypeWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (id)identifier;
- (id)identifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (id)initWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 parentAppRecord:(id)arg2 error:(id*)arg3;
- (id)initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 parentAppRecord:(id)arg3 error:(id*)arg4;
- (id)name;
- (id)nameWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (id)parentAppRecord;
- (id)parentAppRecordWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (unsigned int)platform;
- (unsigned int)platformWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;
- (id)version;
- (id)versionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg4;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (id)_EX_initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 parentAppRecord:(id)arg3 error:(id*)arg4;
- (id)_EX_parentAppRecord;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)_IS_extensionsCanProvideIcon;
- (bool)_IS_extensionsShouldFallbackToContainerIcon;

@end
