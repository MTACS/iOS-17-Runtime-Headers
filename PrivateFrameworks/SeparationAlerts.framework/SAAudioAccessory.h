
@interface SAAudioAccessory : NSObject {
    struct BTAccessoryManagerImpl { } * _fBTAccessoryManager;
    NSString * _fBTAddress;
    struct BTDeviceImpl { } * _fBTDevice;
    struct BTSessionImpl { } * _fBTSession;
    int  _fBTSessionAttachRetryCount;
    unsigned int  _fProductID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) struct BTAccessoryManagerImpl { }*fBTAccessoryManager;
@property (nonatomic, retain) NSString *fBTAddress;
@property (nonatomic) struct BTDeviceImpl { }*fBTDevice;
@property (nonatomic) struct BTSessionImpl { }*fBTSession;
@property (nonatomic) int fBTSessionAttachRetryCount;
@property (nonatomic) unsigned int fProductID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)attachBTSession;
- (void)btSessionEventHandler:(struct BTSessionImpl { }*)arg1 event:(int)arg2 result:(int)arg3;
- (long long)convertToSAInEarStatus:(int)arg1;
- (struct BTAccessoryManagerImpl { }*)fBTAccessoryManager;
- (id)fBTAddress;
- (struct BTDeviceImpl { }*)fBTDevice;
- (struct BTSessionImpl { }*)fBTSession;
- (int)fBTSessionAttachRetryCount;
- (unsigned int)fProductID;
- (void)getInEarStatus:(long long*)arg1 secondary:(long long*)arg2;
- (long long)getPrimaryBudSide;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)refreshBTDevice;
- (void)reset;
- (void)setBTAddress:(id)arg1;
- (void)setFBTAccessoryManager:(struct BTAccessoryManagerImpl { }*)arg1;
- (void)setFBTAddress:(id)arg1;
- (void)setFBTDevice:(struct BTDeviceImpl { }*)arg1;
- (void)setFBTSession:(struct BTSessionImpl { }*)arg1;
- (void)setFBTSessionAttachRetryCount:(int)arg1;
- (void)setFProductID:(unsigned int)arg1;
- (void)setQueue:(id)arg1;

@end
