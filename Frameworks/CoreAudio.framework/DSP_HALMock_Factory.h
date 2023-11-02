
@interface DSP_HALMock_Factory : NSObject <HAL_DSP_Factory> {
    int  _featureFlag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int featureFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createProcessor:(id)arg1 withHost:(id)arg2;
- (int)featureFlag;
- (void)setFeatureFlag:(int)arg1;

@end
