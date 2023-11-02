
@interface SAWebAceWebThumbnail : SAWebAcePicture

@property (nonatomic, copy) NSURL *url;

+ (id)aceWebThumbnail;
+ (id)aceWebThumbnailWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUrl:(id)arg1;
- (id)url;

@end
