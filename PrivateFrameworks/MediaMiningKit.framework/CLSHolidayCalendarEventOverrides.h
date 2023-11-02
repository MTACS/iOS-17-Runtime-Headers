
@interface CLSHolidayCalendarEventOverrides : NSObject {
    NSString * _countryCode;
    NSArray * _dateRuleOverrides;
    double  _locationScore;
    NSDictionary * _sceneImportanceOverrides;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSArray *dateRuleOverrides;
@property (nonatomic, readonly) double locationScore;
@property (nonatomic, readonly) NSDictionary *sceneImportanceOverrides;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)countryCode;
- (id)dateRuleOverrides;
- (id)initWithUUID:(id)arg1 countryCode:(id)arg2 dateRuleOverrides:(id)arg3 locationScore:(double)arg4 sceneImportanceOverrides:(id)arg5;
- (double)locationScore;
- (id)sceneImportanceOverrides;
- (id)sceneImportanceStringForSceneName:(id)arg1;
- (id)uuid;

@end
