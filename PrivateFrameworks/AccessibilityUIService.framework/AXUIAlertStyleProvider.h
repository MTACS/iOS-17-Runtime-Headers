
@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider> {
    NSBundle * _bundle;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)styleProvider;

- (void).cxx_destruct;
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })alertBackgroundSizeForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertEdgeInsetsForType:(unsigned long long)arg1;
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (id)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (id)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (id)alertTextColorForType:(unsigned long long)arg1;
- (id)alertTextFontForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
- (id)bundle;
- (void)setBundle:(id)arg1;

@end
