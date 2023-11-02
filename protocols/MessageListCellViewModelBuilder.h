
@protocol MessageListCellViewModelBuilder <MessageItemViewModelBuilder>

@required

- (NSString *)address;
- (bool)addressIsPresent;
- (NSArray *)addressList;
- (NSAttributedString *)attributedAddress;
- (NSArray *)emailAddresses;
- (bool)hideFollowUp;
- (NSDictionary *)hintsBySnippetZone;
- (long long)recipientType;
- (void)setAddress:(NSString *)arg1;
- (void)setAddressIsPresent:(bool)arg1;
- (void)setAddressList:(NSArray *)arg1;
- (void)setAttributedAddress:(NSAttributedString *)arg1;
- (void)setEmailAddresses:(NSArray *)arg1;
- (void)setHideFollowUp:(bool)arg1;
- (void)setHintsBySnippetZone:(NSDictionary *)arg1;
- (void)setRecipientType:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubject:(NSString *)arg1;
- (void)setSubjectIsPresent:(bool)arg1;
- (long long)style;
- (NSString *)subject;
- (bool)subjectIsPresent;

@end
