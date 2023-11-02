
@interface AVVCDuckOverride : NSObject {
    NSNumber * _duckOthers;
    NSNumber * _duckToLevel;
    bool  _isBlur;
    NSNumber * _mixWithOthers;
}

@property (nonatomic, retain) NSNumber *duckOthers;
@property (nonatomic, retain) NSNumber *duckToLevel;
@property (nonatomic) bool isBlur;
@property (nonatomic, retain) NSNumber *mixWithOthers;

- (void).cxx_destruct;
- (id)description;
- (id)duckOthers;
- (id)duckToLevel;
- (id)init;
- (id)initWithDuckOthers:(id)arg1 duckToLevel:(id)arg2 mixWithOthers:(id)arg3;
- (bool)isBlur;
- (id)mixWithOthers;
- (void)setDuckOthers:(id)arg1;
- (void)setDuckToLevel:(id)arg1;
- (void)setIsBlur:(bool)arg1;
- (void)setMixWithOthers:(id)arg1;

@end
