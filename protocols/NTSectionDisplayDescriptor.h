
@protocol NTSectionDisplayDescriptor <NSCopying>

@required

- (NSString *)actionTitle;
- (NSURL *)actionURL;
- (NSString *)backgroundColorDark;
- (NSString *)backgroundColorLight;
- (NSString *)name;
- (NSURL *)nameActionURL;
- (NSString *)nameColorDark;
- (NSString *)nameColorLight;

@end
