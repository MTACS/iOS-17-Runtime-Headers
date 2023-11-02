
@interface ATXUserNotificationDerivedData : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSMutableArray * _internalScores;
}

@property (getter=getPublicScores, nonatomic, readonly) NSArray *scores;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addScore:(id)arg1;
- (void)addScores:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)getPublicScores;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initFromModelScores:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUserNotificationDerivedData:(id)arg1;
- (id)jsonRepresentation;
- (id)proto;

@end
