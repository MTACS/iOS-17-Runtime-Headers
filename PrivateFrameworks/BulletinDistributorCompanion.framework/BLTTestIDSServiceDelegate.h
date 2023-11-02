
@interface BLTTestIDSServiceDelegate : NSObject {
    <IDSServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <IDSServiceDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)delegate;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
