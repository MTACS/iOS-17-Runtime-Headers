
@interface SBHWidgetIntroductionSettings : PTSettings {
    bool  _bumpLeastUsedApps;
    bool  _editButtonAsUndo;
    bool  _showWidgetIntroConvenienceControl;
    bool  _showXLTVWidget;
    bool  _simpleBottomSnaking;
}

@property (nonatomic) bool bumpLeastUsedApps;
@property (nonatomic) bool editButtonAsUndo;
@property (nonatomic) bool showWidgetIntroConvenienceControl;
@property (nonatomic) bool showXLTVWidget;
@property (nonatomic) bool simpleBottomSnaking;

+ (id)settingsControllerModule;

- (bool)bumpLeastUsedApps;
- (bool)editButtonAsUndo;
- (void)setBumpLeastUsedApps:(bool)arg1;
- (void)setDefaultValues;
- (void)setEditButtonAsUndo:(bool)arg1;
- (void)setShowWidgetIntroConvenienceControl:(bool)arg1;
- (void)setShowXLTVWidget:(bool)arg1;
- (void)setSimpleBottomSnaking:(bool)arg1;
- (bool)showWidgetIntroConvenienceControl;
- (bool)showXLTVWidget;
- (bool)simpleBottomSnaking;

@end
