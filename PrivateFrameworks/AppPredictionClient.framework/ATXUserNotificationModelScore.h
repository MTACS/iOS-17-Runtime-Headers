
@interface ATXUserNotificationModelScore : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSSecureCoding> {
    NSString * _modelId;
    unsigned long long  _modelVersion;
    double  _score;
    NSData * _scoreInfo;
    double  _scoreTimestamp;
    NSUUID * _scoreUUID;
}

@property (nonatomic, readonly) NSString *modelId;
@property (nonatomic, readonly) unsigned long long modelVersion;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSData *scoreInfo;
@property (nonatomic, readonly) double scoreTimestamp;
@property (nonatomic, readonly) NSUUID *scoreUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromJSON:(id)arg1;
- (id)initFromModelScoreData:(id)arg1 modelVersion:(unsigned long long)arg2 score:(double)arg3 scoreTimestamp:(double)arg4 scoreUUID:(id)arg5 scoreInfo:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUserNotificationModelScore:(id)arg1;
- (id)jsonRepresentation;
- (id)modelId;
- (unsigned long long)modelVersion;
- (id)proto;
- (double)score;
- (id)scoreInfo;
- (double)scoreTimestamp;
- (id)scoreUUID;

@end
