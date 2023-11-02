
@interface SBHFolderSettings : PTSettings {
    bool  _allowNestedFolders;
    bool  _animatesPageScrubbing;
    double  _minPinchScale;
    bool  _pinchToClose;
}

@property (nonatomic) bool allowNestedFolders;
@property (nonatomic) bool animatesPageScrubbing;
@property (nonatomic) double minPinchScale;
@property (nonatomic) bool pinchToClose;

+ (id)settingsControllerModule;

- (bool)allowNestedFolders;
- (bool)animatesPageScrubbing;
- (double)minPinchScale;
- (bool)pinchToClose;
- (void)setAllowNestedFolders:(bool)arg1;
- (void)setAnimatesPageScrubbing:(bool)arg1;
- (void)setDefaultValues;
- (void)setMinPinchScale:(double)arg1;
- (void)setPinchToClose:(bool)arg1;

@end
