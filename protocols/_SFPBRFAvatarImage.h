
@protocol _SFPBRFAvatarImage <NSObject>

@required

- (void)addContact_ids:(NSString *)arg1;
- (void)clearContact_ids;
- (NSArray *)contact_ids;
- (NSString *)contact_idsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contact_idsCount;
- (int)image_style;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContact_ids:(NSArray *)arg1;
- (void)setImage_style:(int)arg1;

@end
