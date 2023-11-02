
@interface RPHIDSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <RPMessageable> * _messenger;
}

@property (nonatomic, retain) <RPMessageable> *messenger;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(id /* block */)arg4;
- (void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (id)messenger;
- (void)setMessenger:(id)arg1;

@end
