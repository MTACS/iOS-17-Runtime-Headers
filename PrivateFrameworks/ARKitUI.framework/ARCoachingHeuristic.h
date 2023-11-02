
@interface ARCoachingHeuristic : NSObject {
    bool  _satisfied;
}

@property (nonatomic, readonly) long long requirements;
@property (nonatomic) bool satisfied;

- (long long)requirements;
- (bool)satisfied;
- (void)setSatisfied:(bool)arg1;
- (void)updateWithFrame:(id)arg1 cache:(id)arg2;

@end
