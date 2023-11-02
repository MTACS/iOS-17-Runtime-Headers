
@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController {
    _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource * _annotationViewDataSource;
}

@property (nonatomic, retain) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource;

- (void).cxx_destruct;
- (id)_colorForDisplayType:(id)arg1;
- (id)annotationViewDataSource;
- (id)makeAnnotationDataSource;
- (id)makeStandardCurrentValueViewDataSource;
- (void)setAnnotationViewDataSource:(id)arg1;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4;

@end
