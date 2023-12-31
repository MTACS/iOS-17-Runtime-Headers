
@interface SAUIAttributionSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic) bool showKeyLine;

+ (id)attributionSnippet;
+ (id)attributionSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)appPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAppPunchOut:(id)arg1;
- (void)setShowKeyLine:(bool)arg1;
- (bool)showKeyLine;

@end
