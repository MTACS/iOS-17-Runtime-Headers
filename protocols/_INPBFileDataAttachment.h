
@protocol _INPBFileDataAttachment <NSObject>

@required

- (NSData *)data;
- (NSString *)fileName;
- (bool)hasData;
- (bool)hasFileName;
- (void)setData:(NSData *)arg1;
- (void)setFileName:(NSString *)arg1;

@end
