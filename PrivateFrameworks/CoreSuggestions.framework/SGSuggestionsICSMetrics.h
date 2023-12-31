
@interface SGSuggestionsICSMetrics : NSObject {
    SGMFoundInAppsICS * _foundInAppsICS;
}

@property (nonatomic, retain) SGMFoundInAppsICS *foundInAppsICS;

+ (id)instance;
+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x1; })arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x1; })arg2;

- (void).cxx_destruct;
- (id)foundInAppsICS;
- (id)init;
- (void)setFoundInAppsICS:(id)arg1;

@end
