
@protocol _SFPBDate <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)secondsSince1970;
- (void)setSecondsSince1970:(double)arg1;

@end
