
@protocol AFDisambiguationAssistancePrivate

@required

- (NSData *)af_disambiguationIdentifier;
- (AFDisambiguationInfo *)af_disambiguationInfo;
- (NSString *)af_indexIdentifierForItem:(SAUIListItem *)arg1;
- (SAUIListItem *)af_itemForIndexIdentifier:(NSString *)arg1;
- (void)af_setDisambiguationInfo:(AFDisambiguationInfo *)arg1;

@end
