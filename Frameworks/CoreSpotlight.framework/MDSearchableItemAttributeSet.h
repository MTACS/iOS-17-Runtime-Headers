
@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray *authorPersons;
@property (copy) NSArray *primaryRecipientPersons;
@property (copy) NSArray *recipients;

+ (bool)supportsSecureCoding;

- (id)authorPersons;
- (id)primaryRecipientPersons;
- (id)recipients;
- (void)setAuthorPersons:(id)arg1;
- (void)setPrimaryRecipientPersons:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
