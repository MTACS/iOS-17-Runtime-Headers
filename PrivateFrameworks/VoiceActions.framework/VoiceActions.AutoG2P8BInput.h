
@interface VoiceActions.AutoG2P8BInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void input_ids;
    void input_mask;
    void output_ids;
    void output_mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
