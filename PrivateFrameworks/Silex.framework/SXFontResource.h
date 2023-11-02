
@interface SXFontResource : SXResource <SXFontResource>

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSDictionary *fontDescriptorAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (id)fontAttributesWithValue:(id)arg1 withType:(int)arg2;
- (id)fontDescriptorAttributes;

@end
