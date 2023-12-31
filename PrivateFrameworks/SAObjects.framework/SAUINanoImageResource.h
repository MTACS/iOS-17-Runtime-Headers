
@interface SAUINanoImageResource : SAUIImageResource

@property (nonatomic) bool backgroundNeeded;
@property (nonatomic, copy) NSString *imageDownloadType;
@property (nonatomic, retain) SAUIDecoratedText *monogram;
@property (nonatomic, copy) NSString *placeholderImage;

+ (id)nanoImageResource;
+ (id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (bool)backgroundNeeded;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageDownloadType;
- (id)monogram;
- (id)placeholderImage;
- (void)setBackgroundNeeded:(bool)arg1;
- (void)setImageDownloadType:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;

@end
