
@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase <CVABackgroundRequest> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _renderingRect;
    NSDictionary * _sbufMetadata;
    float  _simulatedFocalRatio;
    float  _sourceColorGain;
    float  _sourceColorLux;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderingRect;
@property (retain) NSDictionary *sbufMetadata;
@property float simulatedFocalRatio;
@property float sourceColorGain;
@property float sourceColorLux;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingRect;
- (id)sbufMetadata;
- (void)setRenderingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSbufMetadata:(id)arg1;
- (void)setSimulatedFocalRatio:(float)arg1;
- (void)setSourceColorGain:(float)arg1;
- (void)setSourceColorLux:(float)arg1;
- (float)simulatedFocalRatio;
- (float)sourceColorGain;
- (float)sourceColorLux;

@end
