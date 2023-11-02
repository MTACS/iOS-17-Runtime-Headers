
@interface OspreyClientStreamContextPromise : NSObject <OspreyClientStreamingContext> {
    OspreyDeferredObject * _deferredContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)finishWriting;
- (void)fulfill:(id)arg1;
- (id)initWithFulfillmentQueue:(id)arg1;
- (void)writeFrame:(id)arg1;
- (void)writeFrame:(id)arg1 compressed:(bool)arg2;

@end
