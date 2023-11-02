
@interface HKAudiogramLineSeries : HKLineSeries {
    void seriesEar;
}

+ (id)audiogramLineSeriesForSeriesEar:(long long)arg1 selectedEar:(long long)arg2 disableConnectionLines:(bool)arg3;
+ (bool)shouldInstallSeriesWithSeriesEar:(long long)arg1 selectedEar:(long long)arg2;

- (id)init;
- (bool)supportsMultiTouchSelection;

@end
