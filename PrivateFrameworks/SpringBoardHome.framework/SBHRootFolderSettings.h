
@interface SBHRootFolderSettings : PTSettings {
    bool  _adjustableLayoutEnabled;
    double  _dockAdditionalIconInset;
    double  _landscapeBottomLayoutInset;
    double  _landscapeSideLayoutInset;
    double  _landscapeTopLayoutInset;
    double  _portraitBottomLayoutInset;
    double  _portraitSideLayoutInset;
    double  _portraitTopLayoutInset;
}

@property (getter=isAdjustableLayoutEnabled, nonatomic) bool adjustableLayoutEnabled;
@property (nonatomic) double dockAdditionalIconInset;
@property (nonatomic) double landscapeBottomLayoutInset;
@property (nonatomic) double landscapeSideLayoutInset;
@property (nonatomic) double landscapeTopLayoutInset;
@property (nonatomic) double portraitBottomLayoutInset;
@property (nonatomic) double portraitSideLayoutInset;
@property (nonatomic) double portraitTopLayoutInset;

+ (id)settingsControllerModule;

- (double)dockAdditionalIconInset;
- (bool)isAdjustableLayoutEnabled;
- (double)landscapeBottomLayoutInset;
- (double)landscapeSideLayoutInset;
- (double)landscapeTopLayoutInset;
- (double)portraitBottomLayoutInset;
- (double)portraitSideLayoutInset;
- (double)portraitTopLayoutInset;
- (void)setAdjustableLayoutEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setDockAdditionalIconInset:(double)arg1;
- (void)setLandscapeBottomLayoutInset:(double)arg1;
- (void)setLandscapeSideLayoutInset:(double)arg1;
- (void)setLandscapeTopLayoutInset:(double)arg1;
- (void)setPortraitBottomLayoutInset:(double)arg1;
- (void)setPortraitSideLayoutInset:(double)arg1;
- (void)setPortraitTopLayoutInset:(double)arg1;

@end
