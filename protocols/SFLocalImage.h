
@protocol SFLocalImage <SFImage>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)localImageType;
- (void)setLocalImageType:(int)arg1;

@end
