
@protocol WBBookmarkRepresentable <NSObject>

@required

- (WebBookmark *)bookmark;
- (id)initWithBookmark:(WebBookmark *)arg1;
- (bool)needsSecureDelete;
- (NSString *)privacyPreservingDescription;
- (void)setBookmark:(WebBookmark *)arg1;

@optional

- (NSDictionary *)modifiedSettingsFieldsByName;
- (void)resumeIncrementingFields:(NSArray *)arg1;

@end
