
@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) bool onlyReturnNextItem;
@property (nonatomic, copy) NSString *siriLocale;
@property (nonatomic, copy) NSString *title;

+ (id)searchPlayableContentFromWatchList;
+ (id)searchPlayableContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)onlyReturnNextItem;
- (bool)requiresResponse;
- (void)setCanonicalId:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setOnlyReturnNextItem:(bool)arg1;
- (void)setSiriLocale:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)siriLocale;
- (id)title;

@end
