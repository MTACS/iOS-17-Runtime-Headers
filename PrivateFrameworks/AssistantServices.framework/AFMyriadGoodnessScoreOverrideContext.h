
@interface AFMyriadGoodnessScoreOverrideContext : NSObject {
    unsigned char  _overriddenAdjustedScore;
    bool  _overrideContext;
}

@property (nonatomic) unsigned char overriddenAdjustedScore;
@property (nonatomic) bool overrideContext;

- (unsigned char)overriddenAdjustedScore;
- (bool)overrideContext;
- (void)setOverriddenAdjustedScore:(unsigned char)arg1;
- (void)setOverrideContext:(bool)arg1;

@end
