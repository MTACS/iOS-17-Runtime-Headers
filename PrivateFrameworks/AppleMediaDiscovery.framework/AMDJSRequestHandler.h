
@interface AMDJSRequestHandler : NSObject

+ (long long)getActionCode:(id)arg1;
+ (id)handlePayload:(id)arg1 error:(id*)arg2;
+ (void)wrapUp;

@end
