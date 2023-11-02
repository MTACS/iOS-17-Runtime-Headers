
@protocol RFVisualElement <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (RFImageElement *)image_element;
- (NSData *)jsonData;
- (void)setImage_element:(RFImageElement *)arg1;

@end
