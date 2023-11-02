
@interface HKAudiogramCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    void applicationItems;
    void audiogram;
}

- (void).cxx_destruct;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)init;
- (id)initWithApplicationItems:(id)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (bool)showSeparators;
- (void)updateWithAudiogram:(id)arg1;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
