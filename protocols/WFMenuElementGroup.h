
@protocol WFMenuElementGroup <NSObject, NSCopying>

@required

- (bool)onlyDisplayTitleWhenCollapsed;
- (void)setOnlyDisplayTitleWhenCollapsed:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (bool)shouldCollapse;
- (unsigned long long)style;
- (NSString *)title;

@end
