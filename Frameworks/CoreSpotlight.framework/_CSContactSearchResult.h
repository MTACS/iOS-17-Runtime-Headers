
@interface _CSContactSearchResult : NSObject {
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSPersonNameComponents * _nameComponents;
    NSNumber * _recentsIdentifier;
    unsigned long long  _scope;
    unsigned long long  _sourceType;
}

@property (nonatomic, readonly) bool contact;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) bool recent;
@property (nonatomic, readonly, copy) NSNumber *recentsIdentifier;
@property (nonatomic) unsigned long long scope;
@property (nonatomic, readonly) unsigned long long sourceType;

+ (id)generateQueryStringForContact:(id)arg1 filterQueries:(id)arg2 includeSecondaryRecipients:(bool)arg3 inputScope:(unsigned long long)arg4;

- (void).cxx_destruct;
- (bool)contact;
- (id)contactIdentifier;
- (id)displayName;
- (id)emailAddresses;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 contactIdentifier:(id)arg3 recentsIdentifier:(id)arg4 sourceType:(unsigned long long)arg5;
- (id)initWithDisplayName:(id)arg1 nameComponents:(id)arg2 emailAddresses:(id)arg3 contactIdentifier:(id)arg4 recentsIdentifier:(id)arg5 sourceType:(unsigned long long)arg6;
- (id)nameComponents;
- (bool)recent;
- (id)recentsIdentifier;
- (unsigned long long)scope;
- (void)setEmailAddresses:(id)arg1;
- (void)setScope:(unsigned long long)arg1;
- (unsigned long long)sourceType;

@end
