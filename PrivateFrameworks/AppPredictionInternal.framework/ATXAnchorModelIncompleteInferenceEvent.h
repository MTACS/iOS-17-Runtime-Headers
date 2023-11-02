
@interface ATXAnchorModelIncompleteInferenceEvent : NSObject <NSSecureCoding> {
    NSString * _anchorClassString;
    ATXDuetEvent * _anchorEvent;
    NSDate * _dateFirstAdded;
    NSNumber * _retryCount;
}

@property (nonatomic, readonly) ATXAnchor *anchor;
@property (nonatomic, readonly) ATXDuetEvent *anchorEvent;
@property (nonatomic, readonly) NSDate *dateFirstAdded;
@property (nonatomic, retain) NSNumber *retryCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)anchorEvent;
- (id)dateFirstAdded;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1 anchorEvent:(id)arg2;
- (id)initWithAnchorClassString:(id)arg1 anchorEvent:(id)arg2 dateFirstAdded:(id)arg3 retryCount:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)retryCount;
- (void)setRetryCount:(id)arg1;

@end
