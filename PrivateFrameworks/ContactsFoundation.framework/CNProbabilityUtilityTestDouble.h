
@interface CNProbabilityUtilityTestDouble : NSObject <CNProbabilityUtility> {
    bool  _expectedResult;
}

@property (nonatomic) bool expectedResult;

- (bool)expectedResult;
- (id)init;
- (id)initWithExpectedResult:(bool)arg1;
- (void)setExpectedResult:(bool)arg1;
- (bool)trueWithProbability:(double)arg1;

@end
