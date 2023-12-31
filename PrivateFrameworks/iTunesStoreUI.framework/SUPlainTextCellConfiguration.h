
@interface SUPlainTextCellConfiguration : SUItemCellConfiguration

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (bool)getShadowColor:(id*)arg1 offset:(struct CGSize { double x1; double x2; }*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)init;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;

@end
