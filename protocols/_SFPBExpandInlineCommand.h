
@protocol _SFPBExpandInlineCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (bool)placeHolderProperty;
- (void)setPlaceHolderProperty:(bool)arg1;

@end
