
@interface WBSSavedAccountMatch : NSObject {
    WBSAutoFillPasskey * _autoFillPasskey;
    WBSSavedAccountContext * _context;
    bool  _hasUniqueHostAndUser;
    NSString * _host;
    long long  _matchLevel;
    NSURLProtectionSpace * _protectionSpace;
    WBSSavedAccount * _savedAccount;
}

@property (nonatomic, readonly, copy) WBSAutoFillPasskey *autoFillPasskey;
@property (nonatomic, readonly) WBSSavedAccountContext *context;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic) bool hasUniqueHostAndUser;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSDate *lastUsedDateAffectingAutoFillSortOrder;
@property (nonatomic, readonly) long long matchLevel;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, readonly) NSString *user;

- (void).cxx_destruct;
- (id)autoFillPasskey;
- (long long)compare:(id)arg1;
- (id)completion;
- (id)context;
- (id)creationDate;
- (id)customTitle;
- (id)debugDescription;
- (id)groupName;
- (bool)hasUniqueHostAndUser;
- (id)host;
- (id)initWithSavedAccount:(id)arg1 protectionSpace:(id)arg2 context:(id)arg3 matchLevel:(long long)arg4;
- (id)initWithSavedAccount:(id)arg1 protectionSpace:(id)arg2 context:(id)arg3 matchLevel:(long long)arg4 autoFillPasskey:(id)arg5;
- (id)lastUsedDateAffectingAutoFillSortOrder;
- (long long)matchLevel;
- (id)password;
- (id)protectionSpace;
- (id)savedAccount;
- (void)setHasUniqueHostAndUser:(bool)arg1;
- (id)user;
- (id)userVisibleDomainForAutoFillWithPageURL:(id)arg1;

@end
