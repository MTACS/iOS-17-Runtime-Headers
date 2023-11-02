
@interface LNAppShortcutDynamicOptionsProviderReference : LNDynamicOptionsProviderReference {
    long long  _appShortcutIndex;
    NSString * _appShortcutsProviderMangledTypeName;
    long long  _optionsProviderIndex;
}

@property (nonatomic, readonly) long long appShortcutIndex;
@property (nonatomic, readonly, copy) NSString *appShortcutsProviderMangledTypeName;
@property (nonatomic, readonly) long long optionsProviderIndex;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appShortcutIndex;
- (id)appShortcutsProviderMangledTypeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAppShortcutsProviderMangledTypeName:(id)arg1 parameterIdentifier:(id)arg2 appShortcutIndex:(long long)arg3 optionsProviderIndex:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)optionsProviderIndex;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)appShortcutMapping;

- (id)topHitSystemEntityCollectionIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)initWithSerializedRepresentation:(id)arg1;
- (id)serializableRepresentation;

@end
