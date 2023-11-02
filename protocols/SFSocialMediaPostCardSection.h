
@protocol SFSocialMediaPostCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)footnote;
- (NSString *)handle;
- (NSData *)jsonData;
- (NSString *)name;
- (NSNumber *)nameMaxLines;
- (bool)nameNoWrap;
- (SFImage *)picture;
- (SFRichText *)post;
- (SFImage *)profilePicture;
- (void)setFootnote:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setNameMaxLines:(NSNumber *)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(SFImage *)arg1;
- (void)setPost:(SFRichText *)arg1;
- (void)setProfilePicture:(SFImage *)arg1;
- (void)setTimestamp:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerifiedGlyph:(SFImage *)arg1;
- (NSString *)timestamp;
- (NSString *)type;
- (SFImage *)verifiedGlyph;

@end
