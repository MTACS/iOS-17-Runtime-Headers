
@interface RPHIDGCSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <RPMessageable> * _messenger;
    NSDictionary * _options;
}

@property (nonatomic, retain) <RPMessageable> *messenger;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;
- (void)invalidate;
- (id)messenger;
- (void)sendGCEvent:(struct RPHIDGCEvent { float x1; float x2; float x3; float x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; float x14; float x15; int x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; }*)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMessenger:(id)arg1;

@end
