
@interface RSFloorPlanGeneratorBase : NSObject {
    unsigned long long  _inputSemanticsVersion;
    bool  _isDoorWindowEnabled;
    RSFloorPlanRender * _render;
}

@property (nonatomic, retain) RSFloorPlanRender *render;

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (unsigned long long)inputSemanticsVersion;
- (bool)isDoorWindowEnabled;
- (id)render;
- (void)setChairBeautificationEnable:(bool)arg1;
- (void)setDoorWindowEnable:(bool)arg1;
- (void)setObjectBeautificationEnable:(bool)arg1;
- (void)setRender:(id)arg1;
- (void)setStandardizationEnable:(bool)arg1;
- (void)setUniformHeightPolygonEnable:(bool)arg1;

@end
