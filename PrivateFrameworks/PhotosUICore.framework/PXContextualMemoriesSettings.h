
@interface PXContextualMemoriesSettings : NSObject {
    NSDictionary * _extraParameters;
    PXContextualMemoriesLocationSetting * _locationSetting;
    PXContextualMemoriesPeopleSetting * _peopleSetting;
    NSArray * _settings;
    PXContextualMemoriesTimeSetting * _timeSetting;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, copy) NSDictionary *extraParameters;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) PXContextualMemoriesLocationSetting *locationSetting;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) PXContextualMemoriesPeopleSetting *peopleSetting;
@property (nonatomic, readonly) NSArray *settings;
@property (nonatomic, readonly) PXContextualMemoriesTimeSetting *timeSetting;

- (void).cxx_destruct;
- (id)date;
- (id)extraParameters;
- (id)init;
- (id)location;
- (id)locationSetting;
- (id)peopleNames;
- (id)peopleSetting;
- (void)setExtraParameters:(id)arg1;
- (id)settings;
- (id)timeSetting;

@end
