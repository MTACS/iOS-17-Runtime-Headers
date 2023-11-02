
@interface AFCompanionDeviceInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _aceHost;
    NSString * _assistantID;
    NSString * _idsIdentifier;
    bool  _meDevice;
    bool  _muxSupportCapability;
    bool  _peerToPeerHandoffCapability;
    NSString * _productPrefix;
    NSString * _siriLanguage;
    NSString * _speechID;
    NSDictionary * _syncMetadata;
    bool  _syncMetadataCapability;
}

@property (nonatomic, readonly, copy) NSString *aceHost;
@property (nonatomic, readonly, copy) NSString *assistantID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, readonly) bool meDevice;
@property (nonatomic, readonly) bool muxSupportCapability;
@property (nonatomic, readonly) bool peerToPeerHandoffCapability;
@property (nonatomic, readonly, copy) NSString *productPrefix;
@property (nonatomic, readonly, copy) NSString *siriLanguage;
@property (nonatomic, readonly, copy) NSString *speechID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *syncMetadata;
@property (nonatomic, readonly) bool syncMetadataCapability;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)aceHost;
- (id)assistantID;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)init;
- (id)initWithAssistantID:(id)arg1 speechID:(id)arg2 idsIdentifier:(id)arg3 productPrefix:(id)arg4 aceHost:(id)arg5 syncMetadata:(id)arg6 syncMetadataCapability:(bool)arg7 peerToPeerHandoffCapability:(bool)arg8 muxSupportCapability:(bool)arg9 meDevice:(bool)arg10 siriLanguage:(id)arg11;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)meDevice;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)muxSupportCapability;
- (bool)peerToPeerHandoffCapability;
- (id)productPrefix;
- (id)siriLanguage;
- (id)speechID;
- (id)syncMetadata;
- (bool)syncMetadataCapability;

@end
