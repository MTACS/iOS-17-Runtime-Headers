
@interface PGCurationTrait : NSObject {
    double  _minimumScore;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isMatchingRequired;
@property (nonatomic) double minimumScore;
@property (readonly) NSString *niceDescription;

- (id)debugDescription;
- (id)init;
- (bool)isActive;
- (bool)isMatchingRequired;
- (double)minimumScore;
- (id)niceDescription;
- (void)setMinimumScore:(double)arg1;

@end
