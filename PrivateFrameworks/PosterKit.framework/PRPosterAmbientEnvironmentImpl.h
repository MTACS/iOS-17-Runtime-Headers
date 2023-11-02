
@interface PRPosterAmbientEnvironmentImpl : NSObject <PRPosterAmbientEnvironment> {
    UITraitCollection * _traitCollection;
}

@property (getter=isAmbientPresented, nonatomic, readonly) bool ambientPresented;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayStyleRedMode, nonatomic, readonly) bool displayStyleRedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)arg1;
- (bool)isAmbientPresented;
- (bool)isDisplayStyleRedMode;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end
