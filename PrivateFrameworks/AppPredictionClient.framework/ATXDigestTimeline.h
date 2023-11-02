
@interface ATXDigestTimeline : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSDate * _digestRemovedTimestamp;
    NSDate * _firstCollapsedViewTimestamp;
    NSDate * _firstScheduledViewTimestamp;
    NSDate * _firstUpcomingViewTimestamp;
}

@property (nonatomic, retain) NSDate *digestRemovedTimestamp;
@property (nonatomic, retain) NSDate *firstCollapsedViewTimestamp;
@property (nonatomic, retain) NSDate *firstScheduledViewTimestamp;
@property (nonatomic, retain) NSDate *firstUpcomingViewTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_timelineFieldsAreEqual:(id)arg1 otherField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestRemovedTimestamp;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)firstCollapsedViewTimestamp;
- (id)firstScheduledViewTimestamp;
- (id)firstUpcomingViewTimestamp;
- (id)initFromJSON:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXDigestTimeline:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (id)proto;
- (void)setDigestRemovedTimestamp:(id)arg1;
- (void)setFirstCollapsedViewTimestamp:(id)arg1;
- (void)setFirstScheduledViewTimestamp:(id)arg1;
- (void)setFirstUpcomingViewTimestamp:(id)arg1;

@end
