
@protocol _SFPBShareCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setShareItem:(_SFPBShareItem *)arg1;
- (_SFPBShareItem *)shareItem;

@end
