
@interface PARTopicRequest : PARRequest <NSSecureCoding> {
    NSArray * _localTopics;
    NSArray * _queryTopicContexts;
    double  _timeoutIntervalForRequest;
    NSArray * _topics;
}

@property (readonly, retain) NSArray *localTopics;
@property (readonly, retain) NSArray *queryTopicContexts;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic, copy) NSArray *topics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localTopics;
- (unsigned int)nwActivityLabel;
- (id)queryTopicContexts;
- (Class)responseClass;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTopics:(id)arg1;
- (double)timeoutIntervalForRequest;
- (id)topics;

@end
