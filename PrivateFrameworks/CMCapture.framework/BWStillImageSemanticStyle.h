
@interface BWStillImageSemanticStyle : NSObject <IBPSemanticStyleProperties> {
    float  _toneBias;
    float  _warmthBias;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float toneBias;
@property (nonatomic) float warmthBias;

- (id)initWithSemanticStyle:(id)arg1;
- (void)setToneBias:(float)arg1;
- (void)setWarmthBias:(float)arg1;
- (float)toneBias;
- (float)warmthBias;

@end
