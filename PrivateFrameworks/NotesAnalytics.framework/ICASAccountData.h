
@interface ICASAccountData : NSObject <AADataEventType> {
    NSString * _accountID;
    ICASAccountType * _accountType;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) ICASAccountType *accountType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)accountID;
- (id)accountType;
- (id)initWithAccountType:(id)arg1 accountID:(id)arg2;
- (id)toDict;

@end
