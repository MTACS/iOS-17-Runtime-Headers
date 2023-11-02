
@interface PPBaseFeedback : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientBundleId;
    NSString * _clientIdentifier;
    NSArray * _feedbackItems;
    NSString * _mappingId;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *clientBundleId;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) NSArray *feedbackItems;
@property (readonly) bool isMapped;
@property (nonatomic, readonly) NSString *mappingId;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackItems;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackItems:(id)arg1 mappingId:(id)arg2;
- (id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPPBaseFeedback:(id)arg1;
- (bool)isMapped;
- (id)mappingId;
- (void)setClientIdentifier:(id)arg1;
- (id)timestamp;

@end
