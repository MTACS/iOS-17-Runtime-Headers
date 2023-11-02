
@interface ICASAccountTypeItemData : NSObject <AADataEventType> {
    ICASAccountType * _accountType;
    NSNumber * _countOfAccounts;
    NSNumber * _countOfNotes;
}

@property (nonatomic, readonly) ICASAccountType *accountType;
@property (nonatomic, readonly) NSNumber *countOfAccounts;
@property (nonatomic, readonly) NSNumber *countOfNotes;

+ (id)dataName;

- (void).cxx_destruct;
- (id)accountType;
- (id)countOfAccounts;
- (id)countOfNotes;
- (id)initWithAccountType:(id)arg1 countOfAccounts:(id)arg2 countOfNotes:(id)arg3;
- (id)toDict;

@end
