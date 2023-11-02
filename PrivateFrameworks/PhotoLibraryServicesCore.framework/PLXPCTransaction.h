
@interface PLXPCTransaction : NSObject {
    const char * _identifier;
    NSObject<OS_os_transaction> * _transaction;
}

+ (void)_startTrackingTransaction:(id)arg1;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (void)initialize;
+ (id)openXPCTransactionStatus;
+ (id)transaction:(const char *)arg1;

- (void).cxx_destruct;
- (id)_statusDescription;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;
- (void)stillAlive;

@end
