
@interface ICNASubTracker : NSObject {
    AATracker * _aaTracker;
    NSString * _aaTrackerName;
}

@property (retain) AATracker *aaTracker;
@property (nonatomic, readonly, copy) NSString *aaTrackerName;

- (void).cxx_destruct;
- (id)aaTracker;
- (id)aaTrackerName;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 parentAATracker:(id)arg2;
- (id)initWithName:(id)arg1 parentTracker:(id)arg2;
- (void)setAaTracker:(id)arg1;

@end
