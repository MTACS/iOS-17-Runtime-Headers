
@interface PBFSinglePosterConfigurationFilter : NSObject <PBFPosterConfigurationFiltering> {
    void configuration;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)shouldIncludePosterConfiguration:(id)arg1 inSwitcherConfiguration:(id)arg2;

@end
