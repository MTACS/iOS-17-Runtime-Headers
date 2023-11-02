
@interface CKSubscriptionInfo : NSObject {
    CKContainer * _container;
    CKDatabase * _database;
    id /* block */  _idHandler;
    NSString * _subscriptionID;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
