
@interface AVVCDuckSettings : NSObject {
    AVVCDuckLevel * _duckLevel;
    AVVCDuckOverride * _duckOverride;
    AVVCDuckFadeDuration * _fadeDuration;
}

@property (nonatomic, retain) AVVCDuckLevel *duckLevel;
@property (nonatomic, retain) AVVCDuckOverride *duckOverride;
@property (nonatomic, retain) AVVCDuckFadeDuration *fadeDuration;

- (void).cxx_destruct;
- (id)description;
- (id)duckLevel;
- (id)duckOverride;
- (id)fadeDuration;
- (id)init;
- (void)setDuckLevel:(id)arg1;
- (void)setDuckOverride:(id)arg1;
- (void)setFadeDuration:(id)arg1;

@end
