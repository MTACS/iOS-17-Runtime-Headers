
@interface SFAnalyticsEvent : NSObject {
    NSDictionary * _record;
    NSNumber * _timestamp;
}

@property (nonatomic, readonly) NSDictionary *record;
@property (nonatomic, readonly) NSNumber *timestamp;

- (void).cxx_destruct;
- (id)initFromRow:(id)arg1;
- (id)record;
- (id)timestamp;

@end
