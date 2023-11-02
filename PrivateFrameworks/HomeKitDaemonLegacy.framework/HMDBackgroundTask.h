
@interface HMDBackgroundTask : HMFObject {
    NSDate * _expectedFireDate;
    NSString * _identifier;
    NSDate * _scheduledDate;
}

@property (nonatomic, readonly, copy) NSDate *expectedFireDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *scheduledDate;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)expectedFireDate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 expectedFireDate:(id)arg2 scheduledDate:(id)arg3;
- (id)scheduledDate;

@end
