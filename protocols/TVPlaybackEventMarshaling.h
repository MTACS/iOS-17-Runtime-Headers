
@protocol TVPlaybackEventMarshaling <NSObject>

@required

- (NSDictionary *)properties;

@optional

- (void)processReturnJSValue:(JSValue *)arg1 inContext:(JSContext *)arg2;

@end
