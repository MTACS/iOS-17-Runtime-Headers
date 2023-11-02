
@interface PGMeaningfulEventTrait : NSObject {
    double  _minimumScore;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isMatchingRequired;
@property (nonatomic) double minimumScore;

- (id)debugDescription;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)init;
- (bool)isActive;
- (bool)isMatchingRequired;
- (double)minimumScore;
- (void)setMinimumScore:(double)arg1;

@end
