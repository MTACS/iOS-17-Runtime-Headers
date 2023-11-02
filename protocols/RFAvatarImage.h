
@protocol RFAvatarImage <NSObject>

@required

- (NSArray *)contact_ids;
- (NSDictionary *)dictionaryRepresentation;
- (int)image_style;
- (NSData *)jsonData;
- (void)setContact_ids:(NSArray *)arg1;
- (void)setImage_style:(int)arg1;

@end
