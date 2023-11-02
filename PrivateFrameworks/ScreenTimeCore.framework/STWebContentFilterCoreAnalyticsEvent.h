
@interface STWebContentFilterCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _webContentFilterEnabled;
}

@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) bool webContentFilterEnabled;

+ (id)description;

- (id)initWithWebContentFilterEnabled:(bool)arg1;
- (id)name;
- (id)payload;
- (bool)webContentFilterEnabled;

@end
