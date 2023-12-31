
@interface HKCoreTelephonyUtilities : NSObject {
    struct __CTServerConnection { } * _ctServerConnection;
    NSObject<OS_dispatch_queue> * _ctServerQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ctServerQueue;

- (void).cxx_destruct;
- (struct __CTServerConnection { }*)ctServerConnection;
- (id)ctServerQueue;
- (void)dealloc;
- (id)init;
- (bool)isEmergencyServicePhoneNumber:(id)arg1;
- (void)setCtServerQueue:(id)arg1;

@end
