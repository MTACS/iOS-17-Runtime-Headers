
@protocol VCActionDonation <NSObject>

@required

- (NSDate *)date;
- (NSString *)fullDescription;
- (NSString *)identifier;
- (INShortcut *)shortcut;
- (NSString *)sourceAppIdentifier;
- (NSString *)sourceAppIdentifierForDisplay;
- (NSString *)sourceAppIdentifierForLaunching;
- (NSString *)subtitle;
- (NSString *)suggestedPhrase;
- (NSString *)title;
- (id)uniqueProperty;

@end
