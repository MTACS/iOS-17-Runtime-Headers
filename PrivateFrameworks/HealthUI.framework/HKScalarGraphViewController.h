
@interface HKScalarGraphViewController : HKGraphViewController {
    double  _minimumHeight;
}

@property (nonatomic, readonly) double minimumHeight;

+ (double)hardLeftMarginWidth;

- (id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2 numericAxisConfigurationOverrides:(id)arg3;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)_setupGraphViewSelectionStyle;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3 numericAxisConfigurationOverrides:(id)arg4;
- (void)loadView;
- (double)minimumHeight;
- (void)viewDidLoad;

@end
