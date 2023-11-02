
@protocol _SFPBCopyCommand <NSObject>

@required

- (_SFPBCopyItem *)copyableItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCopyableItem:(_SFPBCopyItem *)arg1;

@end
