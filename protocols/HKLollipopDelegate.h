
@protocol HKLollipopDelegate <NSObject>

@required

- (void)updateAnnotationDataSource:(id <HKInteractiveChartAnnotationViewDataSourceProtocol>)arg1 pointContexts:(NSArray *)arg2;

@optional

- (UIColor *)lollipopAnnotationColor;
- (UIColor *)lollipopExtensionColor;
- (double)lollipopExtensionLength;
- (double)lollipopExtensionWidth;
- (UIColor *)lollipopFieldColor;

@end
