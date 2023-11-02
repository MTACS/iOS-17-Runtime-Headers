
@interface EXBSeededDisplayConfigurationBuilder : NSObject <EXBDisplayConfigurationBuilding> {
    <EXBDisplayConfigurationBuilding> * _builder;
    unsigned long long  _seed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildConfigurationWithError:(out id*)arg1;
- (id)initWithSeed:(unsigned long long)arg1 builder:(id)arg2;
- (void)setCloningSupported:(bool)arg1;
- (void)setCurrentMode:(id)arg1 preferredMode:(id)arg2 otherModes:(id)arg3;
- (void)setExpectsSecureRendering;
- (void)setOverscanned:(bool)arg1 compensation:(long long)arg2 safeRatio:(struct CGSize { double x1; double x2; })arg3;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 nativeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setUIKitMainLike;
- (void)setUniqueIdentifier:(id)arg1;

@end
