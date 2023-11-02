
@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSCopying, NSSecureCoding> {
    NSString * _avatarRecordIdentifier;
    NSNumber * _frequencySum;
    NSString * _identifier;
    NSNumber * _serializationVersion;
    NSString * _stickerConfigurationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *avatarRecordIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *frequencySum;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSNumber *serializationVersion;
@property (nonatomic, readonly, copy) NSString *stickerConfigurationIdentifier;
@property (readonly) Class superclass;

+ (id /* block */)matchingIdentifierTest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avatarRecordIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frequencySum;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 avatarRecordIdentifier:(id)arg2 stickerConfigurationIdentifier:(id)arg3 frequencySum:(id)arg4 serializationVersion:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)serializationVersion;
- (id)stickerConfigurationIdentifier;

@end
