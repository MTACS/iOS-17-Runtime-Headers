
@interface SBFBSDisplayTransformer : NSObject <FBSDisplayTransformer> {
    SBMainDisplayConfigurationTransformer * _emulatedMainDisplayTransformer;
}

- (void).cxx_destruct;
- (id)init;
- (id)transformDisplayConfiguration:(id)arg1;

@end
