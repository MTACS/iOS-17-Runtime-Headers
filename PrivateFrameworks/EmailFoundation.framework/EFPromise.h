
@interface EFPromise : NSObject <EFCancelable> {
    EFFuture * _future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EFFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)promise;

- (void).cxx_destruct;
- (void)cancel;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)future;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
