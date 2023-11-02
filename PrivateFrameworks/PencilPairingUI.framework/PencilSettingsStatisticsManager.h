
@interface PencilSettingsStatisticsManager : NSObject

+ (id)sharedInstance;

- (void)recordDrawPencilForTextInputToggle:(bool)arg1;
- (void)recordEducationPanelChanged:(long long)arg1;
- (void)recordEducationPencilDidShow:(double)arg1;
- (void)recordEducationPencilInputInteraction:(long long)arg1;
- (void)recordOnlyUsePencilToggle:(bool)arg1;
- (void)recordPaperFromCornerToggle:(bool)arg1;
- (void)recordScreenshotFromCornerToggle:(bool)arg1;
- (void)recordSetPencilPerferredAction:(long long)arg1;
- (id)stringForElementType:(long long)arg1;

@end
