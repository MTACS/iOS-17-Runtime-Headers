
@interface DMFFetchStreamEventsResultObject : CATTaskResultObject {
    NSArray * _eventStatuses;
}

@property (nonatomic, copy) NSArray *eventStatuses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventStatuses;
- (id)initWithCoder:(id)arg1;
- (void)setEventStatuses:(id)arg1;

@end
