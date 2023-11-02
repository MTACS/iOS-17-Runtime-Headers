
@interface SIMStatusIndicator : NSObject <CoreTelephonyClientSubscriberDelegate> {
    void * _applicationContext;
    int (* _callback;
    CoreTelephonyClient * _coreTelephonyClient;
    NSObject<OS_dispatch_queue> * _queue;
}

@property void*applicationContext;
@property int (*callback;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void*)applicationContext;
- (int (*)callback;
- (id)coreTelephonyClient;
- (void)createConnection;
- (id)init;
- (id)queue;
- (void)setApplicationContext:(void*)arg1;
- (void)setCallback:(int (*)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;

@end
