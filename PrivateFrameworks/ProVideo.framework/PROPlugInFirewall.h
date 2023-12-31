
@interface PROPlugInFirewall : NSObject {
    <PROPlugInFirewallErrorHandler> * errorHandler;
    id  protectedObject;
    Protocol * protocol;
    Protocol * secondaryProtocol;
}

+ (void)deadMethod;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;

- (void)deadMethod;
- (void)dealloc;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)protectedObject;

@end
