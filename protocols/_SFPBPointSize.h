
@protocol _SFPBPointSize <NSObject>

@required

- (_SFPBGraphicalFloat *)height;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setHeight:(_SFPBGraphicalFloat *)arg1;
- (void)setWidth:(_SFPBGraphicalFloat *)arg1;
- (_SFPBGraphicalFloat *)width;

@end
