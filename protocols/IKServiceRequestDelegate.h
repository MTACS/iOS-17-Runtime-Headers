
@protocol IKServiceRequestDelegate <NSObject>

@optional

- (void)serviceRequest:(IKServiceRequest *)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(NSDictionary *)arg3;

@end
