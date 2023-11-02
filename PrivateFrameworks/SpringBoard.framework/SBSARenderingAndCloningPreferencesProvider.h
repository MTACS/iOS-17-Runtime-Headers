
@interface SBSARenderingAndCloningPreferencesProvider : SBSABasePreferencesProvider {
    long long  _previousCloningStyle;
    long long  _previousContainerRenderingStyle;
    long long  _previousCurtainRenderingStyle;
}

- (id)preferencesFromContext:(id)arg1;

@end
