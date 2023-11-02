
@interface HDAudioAnalyticsHeadphoneSettingsDeviceResult : NSObject {
    NSNumber * _haeRetention;
    NSNumber * _hasHAENEnabled;
    NSNumber * _hasHAENRequired;
    NSNumber * _hasIncludeOtherHeadphonesEnabled;
    NSNumber * _hasMeasureLevelsEnabled;
}

@property (nonatomic, readonly) NSNumber *haeRetention;
@property (nonatomic, readonly) NSNumber *hasHAENEnabled;
@property (nonatomic, readonly) NSNumber *hasHAENRequired;
@property (nonatomic, readonly) NSNumber *hasIncludeOtherHeadphonesEnabled;
@property (nonatomic, readonly) NSNumber *hasMeasureLevelsEnabled;

+ (id)optInSettingsWithHasHAENEnabled:(bool)arg1 hasMeasureLevelsEnabled:(bool)arg2 hasIncludeOtherHeadphonesEnabled:(bool)arg3;
+ (id)requiredSettingsWithSaveForEightDays:(bool)arg1;

- (void).cxx_destruct;
- (id)haeRetention;
- (id)hasHAENEnabled;
- (id)hasHAENRequired;
- (id)hasIncludeOtherHeadphonesEnabled;
- (id)hasMeasureLevelsEnabled;
- (id)initWithHAENRequired:(bool)arg1 hasHAENEnabled:(id)arg2 hasMeasureLevelsEnabled:(id)arg3 hasIncludeOtherHeadphonesEnabled:(id)arg4 haeRetention:(id)arg5;

@end
