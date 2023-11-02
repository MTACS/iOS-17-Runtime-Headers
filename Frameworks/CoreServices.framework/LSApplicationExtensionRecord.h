
@interface LSApplicationExtensionRecord : LSBundleRecord <PAApplicationExtensionRecord> {
    LSBundleRecord * _weakContainingBundleRecord;
}

@property (readonly) LSBundleRecord *_containingBundleRecord;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) LSPlugInKitProxy *compatibilityObject;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL developerType;
@property (readonly) NSString *effectiveBundleIdentifier;
@property (readonly) LSExtensionPointRecord *extensionPointRecord;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSDictionary *if_extensionAttributesDictionary;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (id)applicationExtensionRecordsForUUIDs:(id)arg1 outContainingBundleRecords:(id*)arg2 error:(id*)arg3;
+ (id)enumeratorWithExtensionPointRecord:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorWithOptions:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_LSRecord_resolve__containingBundleRecord;
- (void)_LSRecord_resolve_effectiveBundleIdentifier;
- (void)_LSRecord_resolve_extensionPointRecord;
- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_uniqueIdentifier;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (unsigned long long)_containerClass;
- (bool)_containerized;
- (id)_containingBundleRecord;
- (id)_containingBundleRecordWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 pluginID:(unsigned int)arg2 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg3 error:(id*)arg4;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 pluginID:(unsigned int)arg2 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg3 extensionPointRecord:(id)arg4 error:(id*)arg5;
- (id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 context:(struct LSContext { id x1; }*)arg4 requireValid:(bool)arg5 error:(id*)arg6;
- (id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 platform:(unsigned int)arg4 context:(struct LSContext { id x1; }*)arg5 requireValid:(bool)arg6 error:(id*)arg7;
- (id)_intentsArrayForKey:(id)arg1;
- (id)_personasWithAttributes;
- (id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3;
- (bool)_usesSystemPersona;
- (id)associatedPersonas;
- (unsigned long long)compatibilityState;
- (id)containingBundleRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)developerType;
- (id)effectiveBundleIdentifier;
- (id)effectiveBundleIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg4;
- (id)extensionPointRecord;
- (id)extensionPointRecordWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg4;
- (id)iconDictionary;
- (id)iconDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg4;
- (id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithBundleIdentifier:(id)arg1 requireValid:(bool)arg2 error:(id*)arg3;
- (id)initWithBundleIdentifier:(id)arg1 requireValid:(bool)arg2 platform:(unsigned int)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 requireValid:(bool)arg2 error:(id*)arg3;
- (id)initWithUUID:(id)arg1 error:(id*)arg2;
- (id)initWithUUID:(id)arg1 requireValid:(bool)arg2 error:(id*)arg3;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)managedPersonas;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (id)uniqueIdentifier;
- (id)uniqueIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg4;

// Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI

+ (unsigned int)_fpui_exactPlatformRequiredExtensionUseCase:(unsigned long long)arg1 isUIExtension:(bool)arg2;
+ (id)fpui_extensionRecordByFiltering:(id)arg1 useCase:(unsigned long long)arg2 isUIExtension:(bool)arg3;
+ (id)fpui_extensionRecordForIdentifier:(id)arg1 useCase:(unsigned long long)arg2 isUIExtension:(bool)arg3;
+ (id)fpui_extensionRecordForURL:(id)arg1 useCase:(unsigned long long)arg2 isUIExtension:(bool)arg3;

- (id)fpui_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)fpui_extensionInfoForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)_IS_isMessagesExtension;
- (bool)_is_canProvideIconResources;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_extensionAttributesDictionary;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_initWithExtensionApplicationIdentifier:(id)arg1 error:(id*)arg2;

@end
