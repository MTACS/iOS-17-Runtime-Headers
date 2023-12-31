
@interface ChartLabelInfoManager : NSObject {
    NSMutableArray * _integerLabelInfoArray;
    NSMutableArray * _monthLabelInfoArrays;
    bool  _use24hrTime;
    ChartLabelInfo * _yAxisLabelInfo;
}

+ (struct __CFString { }*)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1;
+ (id)chartLabelFont;
+ (void)clearSharedManager;
+ (id)sharedLabelInfoManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)arg1;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)arg1;
- (id)monthLabelInfoArrayForLabelLength:(long long)arg1;
- (void)resetLocale;
- (bool)use24hrTime;

@end
