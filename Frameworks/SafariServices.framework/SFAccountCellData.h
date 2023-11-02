
@interface SFAccountCellData : NSObject {
    WBSSavedAccount * _savedAccount;
    unsigned long long  _savedAccountHash;
    bool  _savedAccountIsOnlySavedAccountForHighLevelDomain;
    NSString * _searchPattern;
    WBSPasswordWarning * _warning;
    unsigned long long  _warningHash;
}

@property (nonatomic, readonly, copy) NSString *effectiveTitle;
@property (nonatomic, readonly, copy) NSString *effectiveTitleForSorting;
@property (nonatomic, readonly, copy) NSString *highLevelDomain;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, readonly) bool savedAccountIsOnlySavedAccountForHighLevelDomain;
@property (nonatomic, readonly, copy) NSString *searchPattern;
@property (nonatomic, readonly) WBSPasswordWarning *warning;

+ (id)accountCellDataWithSavedAccount:(id)arg1 warning:(id)arg2 searchPattern:(id)arg3 savedAccountIsOnlySavedAccountForHighLevelDomain:(bool)arg4;

- (void).cxx_destruct;
- (id)effectiveTitle;
- (id)effectiveTitleForSorting;
- (unsigned long long)hash;
- (id)highLevelDomain;
- (id)initWithSavedAccount:(id)arg1 warning:(id)arg2 searchPattern:(id)arg3 savedAccountIsOnlySavedAccountForHighLevelDomain:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)savedAccount;
- (bool)savedAccountIsOnlySavedAccountForHighLevelDomain;
- (id)searchPattern;
- (id)warning;

@end
