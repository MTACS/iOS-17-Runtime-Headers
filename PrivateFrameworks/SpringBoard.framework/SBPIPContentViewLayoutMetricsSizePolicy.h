
@interface SBPIPContentViewLayoutMetricsSizePolicy : NSObject {
    struct { 
        double minimum; 
        double maximum; 
    }  _landscapeAspectRatioInterval;
    SBPIPContentViewLayoutSizePreferences * _landscapeSizePref;
    struct { 
        double minimum; 
        double maximum; 
    }  _portraitAspectRatioInterval;
    SBPIPContentViewLayoutSizePreferences * _portraitSizePref;
    struct { 
        double minimum; 
        double maximum; 
    }  _squareAspectRatioInterval;
    SBPIPContentViewLayoutSizePreferences * _squareSizePref;
}

- (void).cxx_destruct;
- (id)initWithSizePreferencesForLandscape:(id)arg1 portrait:(id)arg2 square:(id)arg3;
- (id)sizePreferencesForAspectRatio:(double)arg1;

@end
