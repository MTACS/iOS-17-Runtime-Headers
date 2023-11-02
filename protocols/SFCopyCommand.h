
@protocol SFCopyCommand <SFCommand>

@required

- (SFCopyItem *)copyableItem;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setCopyableItem:(SFCopyItem *)arg1;

@end
