
@interface _PSContactSuggestion : NSObject <NSSecureCoding> {
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSSet * _daysInteracted;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _groupIdentifier;
    NSString * _groupName;
    NSArray * _groupRecipients;
    NSDictionary * _handleAndAppFrequencies;
    NSDictionary * _handleAndAppRegularityScores;
    NSURL * _imageURL;
    NSString * _messagesGroupIdentifier;
    double  _peopleWidgetScore;
    double  _regularityScore;
    NSString * _suggestedHandle;
    unsigned long long  _totalFrequency;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSSet *daysInteracted;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSArray *groupRecipients;
@property (nonatomic, copy) NSDictionary *handleAndAppFrequencies;
@property (nonatomic, copy) NSDictionary *handleAndAppRegularityScores;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic) double peopleWidgetScore;
@property (nonatomic) double regularityScore;
@property (nonatomic, copy) NSString *suggestedHandle;
@property (nonatomic) unsigned long long totalFrequency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactIdentifier;
- (id)daysInteracted;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)groupIdentifier;
- (id)groupName;
- (id)groupRecipients;
- (id)handleAndAppFrequencies;
- (id)handleAndAppRegularityScores;
- (unsigned long long)hash;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 andScore:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)messagesGroupIdentifier;
- (double)peopleWidgetScore;
- (double)regularityScore;
- (void)setContact:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDaysInteracted:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupRecipients:(id)arg1;
- (void)setHandleAndAppFrequencies:(id)arg1;
- (void)setHandleAndAppRegularityScores:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setMessagesGroupIdentifier:(id)arg1;
- (void)setPeopleWidgetScore:(double)arg1;
- (void)setRegularityScore:(double)arg1;
- (void)setSuggestedHandle:(id)arg1;
- (void)setTotalFrequency:(unsigned long long)arg1;
- (id)suggestedHandle;
- (unsigned long long)totalFrequency;

@end
