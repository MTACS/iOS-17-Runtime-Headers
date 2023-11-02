
@interface HKAudiogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    void applicationItems;
    void averageSensitivityFormatter;
    void currentDateView;
    void hearingSensitivityFormatter;
    void keyValuePairs;
}

- (void).cxx_destruct;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)init;
- (id)initWithApplicationItems:(id)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (bool)reverseColumnsInRightToLeftLayoutDirection;
- (bool)showSeparators;
- (void)updateWithPointSelectionContexts:(id)arg1 date:(id)arg2 isAverage:(bool)arg3;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
