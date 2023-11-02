
@protocol _SFPBCommandButtonItem <NSObject>

@required

- (void)addPreviewButtonItems:(_SFPBButtonItem *)arg1;
- (void)clearPreviewButtonItems;
- (_SFPBCommand *)command;
- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isDestructive;
- (NSData *)jsonData;
- (NSArray *)previewButtonItems;
- (_SFPBButtonItem *)previewButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewButtonItemsCount;
- (void)setCommand:(_SFPBCommand *)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setIsDestructive:(bool)arg1;
- (void)setPreviewButtonItems:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (NSString *)title;
- (unsigned long long)uniqueId;

@end
