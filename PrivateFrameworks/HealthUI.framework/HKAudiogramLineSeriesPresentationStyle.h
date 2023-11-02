
@interface HKAudiogramLineSeriesPresentationStyle : NSObject {
    void disableConnectionLines;
    void displayState;
    void selectedEar;
    void seriesEar;
}

- (id)init;
- (id)initWithSeriesEar:(long long)arg1 selectedEar:(long long)arg2 disableConnectionLines:(bool)arg3;
- (id)lineSeriesPresentationStyle;

@end
