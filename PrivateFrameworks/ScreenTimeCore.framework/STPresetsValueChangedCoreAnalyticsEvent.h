
@interface STPresetsValueChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    NSString * _fieldName;
    NSString * _recommendedPresetId;
    id  _recommendedValue;
    id  _selectedValue;
    NSString * _sessionId;
}

@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *recommendedPresetId;
@property (readonly) id recommendedValue;
@property (readonly) id selectedValue;
@property (readonly) NSString *sessionId;

+ (id)description;

- (void).cxx_destruct;
- (id)fieldName;
- (id)initWithSessionId:(id)arg1 recommendedPresetId:(id)arg2 fieldName:(id)arg3 recommendedValue:(id)arg4 selectedValue:(id)arg5;
- (id)name;
- (id)payload;
- (id)recommendedPresetId;
- (id)recommendedValue;
- (id)selectedValue;
- (id)sessionId;

@end
