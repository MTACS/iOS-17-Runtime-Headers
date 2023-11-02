
@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {
    NSMutableArray * _emailAddresses;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (nonatomic, retain) NSMutableArray *emailAddresses;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addEmailAddress:(id)arg1;
- (id)description;
- (id)emailAddresses;
- (id)init;
- (void)setEmailAddresses:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
