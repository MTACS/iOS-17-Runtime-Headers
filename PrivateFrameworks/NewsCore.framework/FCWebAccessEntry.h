
@interface FCWebAccessEntry : NSObject {
    NSString * _email;
    NSString * _identifier;
    NSDate * _lastRetryAttemptTime;
    NSString * _purchaseID;
    NSString * _purchaseReceipt;
    NSString * _tagID;
}

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSDate *lastRetryAttemptTime;
@property (nonatomic, readonly) NSString *purchaseID;
@property (nonatomic, readonly) NSString *purchaseReceipt;

- (void).cxx_destruct;
- (id)email;
- (id)lastRetryAttemptTime;
- (id)purchaseID;
- (id)purchaseReceipt;

@end
