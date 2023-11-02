
@interface COAlarmReadResponse : COMeshResponse {
    NSArray * _alarms;
    NSArray * _deletes;
    bool  _filtered;
    bool  _skipInMerge;
}

@property (nonatomic, readonly, copy) NSArray *alarms;
@property (nonatomic, readonly, copy) NSArray *deletes;
@property (getter=isFiltered, nonatomic, readonly) bool filtered;
@property (nonatomic, readonly) bool skipInMerge;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarms;
- (id)deletes;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarms:(id)arg1;
- (id)initWithAlarms:(id)arg1 deletes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilteredAlarms:(id)arg1;
- (id)initWithSkipInMerge;
- (bool)isFiltered;
- (bool)skipInMerge;

@end
