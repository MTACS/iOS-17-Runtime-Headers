
@interface CNContactSuggestionMatch : NSObject {
    SGContact * _contact;
    SGContactMatch * _contactMatch;
    NSString * _mainStoreLinkedIdentifier;
}

@property (nonatomic, retain) SGContact *contact;
@property (nonatomic, retain) SGContactMatch *contactMatch;
@property (nonatomic, retain) NSString *mainStoreLinkedIdentifier;

+ (void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2;
+ (id)os_log;
+ (id)suggestionFromContactMatch:(id)arg1;

- (void).cxx_destruct;
- (id)contact;
- (id)contactMatch;
- (id)mainStoreLinkedIdentifier;
- (void)setContact:(id)arg1;
- (void)setContactMatch:(id)arg1;
- (void)setMainStoreLinkedIdentifier:(id)arg1;

@end