
@protocol PXPersonSuggestion <NSObject, NSCopying>

@required

- (NSString *)localizedName;
- (bool)matchesRecipientInRecipients:(NSArray *)arg1;

@end
