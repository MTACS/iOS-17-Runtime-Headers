
@protocol _CPCounterfactualInfo <NSObject>

@required

- (bool)cfDiffered;
- (int)cfError;
- (bool)cfUsed;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCfDiffered:(bool)arg1;
- (void)setCfError:(int)arg1;
- (void)setCfUsed:(bool)arg1;

@end
