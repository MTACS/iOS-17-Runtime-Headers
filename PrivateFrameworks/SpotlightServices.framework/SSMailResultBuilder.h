
@interface SSMailResultBuilder : SSResultBuilder {
    NSString * _author;
    NSString * _authorEmail;
    NSString * _body;
    NSDate * _creationDate;
    NSArray * _recipientEmails;
    NSArray * _recipients;
    NSString * _subject;
}

@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *authorEmail;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSArray *recipientEmails;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSString *subject;

+ (id)bundleId;
+ (id)getFirstNameFromString:(id)arg1;
+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)author;
- (id)authorEmail;
- (id)body;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildRecipientsString;
- (id)buildThumbnail;
- (id)creationDate;
- (id)fallbackTitleString;
- (id)initWithResult:(id)arg1;
- (unsigned long long)numberOfLinesForDescriptions;
- (id)recipientEmails;
- (id)recipients;
- (void)setAuthor:(id)arg1;
- (void)setAuthorEmail:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setRecipientEmails:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)subject;

@end
