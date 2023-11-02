
@interface PARQueryTopicContext : NSObject <NSSecureCoding> {
    NSString * _contextId;
    SFQueryTopic * _topic;
}

@property (nonatomic, retain) NSString *contextId;
@property (nonatomic, readonly) long long index;
@property (nonatomic, retain) SFQueryTopic *topic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextId;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 index:(long long)arg2;
- (void)setContextId:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end
