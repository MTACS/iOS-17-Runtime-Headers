
@interface HKGraphSeriesConfigurationManager : NSObject {
    NSMutableDictionary * _zoomLevelConfigurationManagers;
}

- (void).cxx_destruct;
- (id)_configurationManagerForZoom:(long long)arg1;
- (long long)_zoomLevelForGraphZoom:(long long)arg1;
- (void)addConfiguration:(id)arg1 zoom:(long long)arg2;
- (id)allDisplayTypes;
- (id)allDisplayTypesForZoom:(long long)arg1;
- (id)allGraphSeriesForZoom:(long long)arg1;
- (id)configurationForDisplayType:(id)arg1 zoom:(long long)arg2;
- (id)configurationForGraphSeries:(id)arg1 zoom:(long long)arg2;
- (id)init;
- (void)removeConfigurationsForDisplayType:(id)arg1;
- (void)reset;

@end
