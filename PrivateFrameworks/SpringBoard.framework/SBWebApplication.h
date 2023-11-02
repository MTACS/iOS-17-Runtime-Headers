
@interface SBWebApplication : SBApplication

+ (id)_webAppIdentifierFromWebClipIdentifier:(id)arg1;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)arg1;

- (id)iconIdentifier;
- (bool)isWebApplication;
- (bool)supportsMultitaskingShelf;

@end
