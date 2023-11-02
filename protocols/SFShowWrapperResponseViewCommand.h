
@protocol SFShowWrapperResponseViewCommand <SFCommand>

@required

- (SFCATModel *)catModel;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setCatModel:(SFCATModel *)arg1;

@end
