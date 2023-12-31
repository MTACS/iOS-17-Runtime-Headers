
@interface BBBulletinTransaction : NSObject {
    NSString * _bulletinID;
    unsigned long long  _transactionID;
}

@property (nonatomic, readonly, copy) NSString *bulletinID;
@property (nonatomic, readonly) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)arg1;

- (void).cxx_destruct;
- (id)bulletinID;
- (id)description;
- (unsigned long long)incrementTransactionID;
- (id)initWithBulletinID:(id)arg1;
- (unsigned long long)transactionID;

@end
