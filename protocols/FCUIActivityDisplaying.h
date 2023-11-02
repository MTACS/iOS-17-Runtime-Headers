
@protocol FCUIActivityDisplaying <FCActivityDescribing>

@required

- (UIImage *)activityIcon;
- (NSString *)detailText;
- (bool)isHighlighted;
- (bool)isSelected;
- (bool)isSelectionHidden;
- (void)setActivityIcon:(UIImage *)arg1;
- (void)setDetailText:(NSString *)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionHidden:(bool)arg1;

@end
