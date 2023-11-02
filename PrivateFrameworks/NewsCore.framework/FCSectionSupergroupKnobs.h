
@interface FCSectionSupergroupKnobs : NSObject {
    bool  _isEligible;
    NSString * _nameOverride;
    double  _rankMultiplier;
}

@property (nonatomic) bool isEligible;
@property (nonatomic, readonly) NSString *nameOverride;
@property (nonatomic, readonly) double rankMultiplier;

- (void).cxx_destruct;
- (id)initWithJSONData:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (bool)isEligible;
- (id)nameOverride;
- (double)rankMultiplier;
- (void)setIsEligible:(bool)arg1;

@end
