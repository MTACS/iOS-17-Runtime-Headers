
@interface PIRedEyeAutoCalculator : NUAutoCalculator {
    bool  _force;
}

@property bool force;

- (void)_configureRequest:(id)arg1;
- (id)_options;
- (bool)force;
- (void)setForce:(bool)arg1;
- (void)submit:(id /* block */)arg1;

@end
