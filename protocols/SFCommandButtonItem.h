
@protocol SFCommandButtonItem <SFButtonItem>

@required

- (SFCommand *)command;
- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (bool)isDestructive;
- (NSData *)jsonData;
- (NSArray *)previewButtonItems;
- (void)setCommand:(SFCommand *)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setIsDestructive:(bool)arg1;
- (void)setPreviewButtonItems:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
