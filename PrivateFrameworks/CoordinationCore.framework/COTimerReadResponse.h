
@interface COTimerReadResponse : COMeshResponse {
    NSArray * _deletes;
    bool  _filtered;
    bool  _skipInMerge;
    NSArray * _timers;
}

@property (nonatomic, readonly, copy) NSArray *deletes;
@property (getter=isFiltered, nonatomic, readonly) bool filtered;
@property (nonatomic, readonly) bool skipInMerge;
@property (nonatomic, readonly, copy) NSArray *timers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deletes;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilteredTimers:(id)arg1;
- (id)initWithSkipInMerge;
- (id)initWithTimers:(id)arg1;
- (id)initWithTimers:(id)arg1 deletes:(id)arg2;
- (bool)isFiltered;
- (bool)skipInMerge;
- (id)timers;

@end
