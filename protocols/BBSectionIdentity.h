
@protocol BBSectionIdentity <NSObject>

@required

- (NSString *)sectionIdentifier;

@optional

- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)parentSectionIdentifier;
- (NSString *)sectionBundlePath;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (NSData *)sectionIconData;
- (NSString *)universalSectionIdentifier;

@end
