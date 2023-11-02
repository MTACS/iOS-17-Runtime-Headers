
@interface STKUSSDFilter : NSObject {
    NSArray * _alwaysFilteredPatterns;
    double  _lastWarningTime;
    NSArray * _sometimesFilteredPatterns;
}

@property (nonatomic, readonly, copy) NSArray *alwaysFilteredPatterns;
@property (nonatomic) double lastWarningTime;
@property (nonatomic, readonly, copy) NSArray *sometimesFilteredPatterns;

+ (id)cachedExpressions;

- (void).cxx_destruct;
- (id)_matchesInString:(id)arg1 forPattern:(id)arg2;
- (id)alwaysFilteredPatterns;
- (id)initWithAlwaysFilteredPatterns:(id)arg1 sometimesFilteredPatterns:(id)arg2;
- (double)lastWarningTime;
- (void)reset;
- (void)setLastWarningTime:(double)arg1;
- (bool)shouldFilterString:(id)arg1 coalescable:(bool*)arg2;
- (id)sometimesFilteredPatterns;

@end
