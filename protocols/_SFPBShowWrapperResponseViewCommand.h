
@protocol _SFPBShowWrapperResponseViewCommand <NSObject>

@required

- (_SFPBCATModel *)catModel;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCatModel:(_SFPBCATModel *)arg1;

@end
