
@interface STPresetsEnableRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    NSNumber * _lowerBoundAgeRange;
    long long  _selectionType;
    NSString * _sessionId;
    NSNumber * _upperBoundAgeRange;
}

@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *lowerBoundAgeRange;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) long long selectionType;
@property (readonly) NSString *sessionId;
@property (readonly) NSNumber *upperBoundAgeRange;

+ (id)description;

- (void).cxx_destruct;
- (id)_stringDescriptionForSelectionType:(long long)arg1;
- (id)initWithSessionId:(id)arg1 selectionType:(long long)arg2 lowerBoundAgeRange:(id)arg3 upperBoundAgeRange:(id)arg4;
- (id)lowerBoundAgeRange;
- (id)name;
- (id)payload;
- (long long)selectionType;
- (id)sessionId;
- (id)upperBoundAgeRange;

@end
