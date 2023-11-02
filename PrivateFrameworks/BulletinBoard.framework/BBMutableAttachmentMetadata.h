
@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool hiddenFromDefaultExpandedView;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *thumbnailGeneratorUserInfo;
@property (nonatomic) bool thumbnailHidden;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *uniformType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setHiddenFromDefaultExpandedView:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setThumbnailGeneratorUserInfo:(id)arg1;
- (void)setThumbnailHidden:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setUniformType:(id)arg1;

@end
