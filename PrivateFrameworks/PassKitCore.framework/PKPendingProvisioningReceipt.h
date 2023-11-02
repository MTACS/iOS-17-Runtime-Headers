
@interface PKPendingProvisioningReceipt : NSObject {
    double  _createdAt;
    NSString * _identifier;
    NSString * _passUniqueID;
    long long  _type;
}

@property (nonatomic) double createdAt;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *passUniqueID;
@property (nonatomic) long long type;

+ (id)failedReceiptWithIdentifier:(id)arg1;
+ (id)successReceiptWithIdentifier:(id)arg1 passUniqueID:(id)arg2;

- (void).cxx_destruct;
- (double)createdAt;
- (id)description;
- (id)identifier;
- (id)initForDatabase;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 passUniqueID:(id)arg3;
- (id)passUniqueID;
- (void)setCreatedAt:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPassUniqueID:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
