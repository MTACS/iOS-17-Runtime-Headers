
@interface HPSDeviceAnalytics : NSObject {
    NSMutableDictionary * _analyticDict;
    NSMutableDictionary * _analyticDictFitTest;
    NSMutableDictionary * _analyticDictV2;
    NSString * _entryPoint;
}

- (void).cxx_destruct;
- (id)init;
- (void)resetAnalyticDict;
- (void)resetAnalyticDictFitTest;
- (void)resetAnalyticDictV2;
- (void)sendFeatureInfoEvent;
- (void)submitDeviceAnalytics;
- (void)submitDeviceAnalyticsVer2;
- (void)submitFitTestAnalytics;
- (void)updateEntryPoint:(int)arg1;
- (void)updateFeatureChangeCount:(int)arg1;
- (void)updateFeatureValue:(int)arg1 value:(unsigned int)arg2 featureValueString:(id)arg3;
- (void)updateFitTestValue:(int)arg1 value:(int)arg2;
- (void)updateProductID:(unsigned int)arg1;

@end
