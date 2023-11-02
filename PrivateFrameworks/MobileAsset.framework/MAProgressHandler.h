
@interface MAProgressHandler : NSObject {
    NSMutableArray * _callBackArray;
    unsigned long long  _notificationInterval;
}

@property (nonatomic, readonly) NSMutableArray *callBackArray;
@property (nonatomic) unsigned long long notificationInterval;

- (void).cxx_destruct;
- (void)addCallBack:(id /* block */)arg1;
- (id)callBackArray;
- (id)initWithCallBack:(id /* block */)arg1;
- (unsigned long long)notificationInterval;
- (void)setNotificationInterval:(unsigned long long)arg1;

@end
