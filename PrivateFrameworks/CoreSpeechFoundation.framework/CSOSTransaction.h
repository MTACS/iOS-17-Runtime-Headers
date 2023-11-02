
@interface CSOSTransaction : NSObject {
    NSString * _description;
    NSObject<OS_os_transaction> * _transaction;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescription:(id)arg1;

@end
