
@interface STEyeReliefChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _eyeReliefEnabled;
}

@property (readonly, copy) NSString *description;
@property (readonly) bool eyeReliefEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (bool)eyeReliefEnabled;
- (id)initWithEyeReliefEnabled:(bool)arg1;
- (id)name;
- (id)payload;

@end
