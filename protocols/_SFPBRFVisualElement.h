
@protocol _SFPBRFVisualElement <NSObject>

@required

- (_SFPBRFImageElement *)image_element;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setImage_element:(_SFPBRFImageElement *)arg1;
- (unsigned long long)whichElement;

@end
