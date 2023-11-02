
@interface CSComplicationPresentationState : NSObject {
    long long  _backlightLuminance;
    long long  _interfaceOrientation;
    bool  _presenterVisible;
    bool  _screenOff;
    bool  _shouldPresentLandscapeComplications;
    unsigned long long  _suggestedComplicationPresentationMode;
}

- (void)_hydrateSuggestedPresentationMode;
- (id)description;
- (bool)isEqual:(id)arg1;

@end
