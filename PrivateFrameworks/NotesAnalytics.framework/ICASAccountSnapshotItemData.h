
@interface ICASAccountSnapshotItemData : NSObject <AADataEventType> {
    NSString * _accountID;
    ICASAccountPurpose * _accountPurpose;
    ICASAccountType * _accountType;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) ICASAccountPurpose *accountPurpose;
@property (nonatomic, readonly) ICASAccountType *accountType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)accountID;
- (id)accountPurpose;
- (id)accountType;
- (id)initWithAccountID:(id)arg1 accountType:(id)arg2 accountPurpose:(id)arg3;
- (id)toDict;

@end
