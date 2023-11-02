
@interface CLOSTransaction : NSObject {
    NSString * _description;
    NSObject<OS_os_transaction> * _transaction;
}

- (void)dealloc;
- (id)initWithDescription:(const char *)arg1;

@end
