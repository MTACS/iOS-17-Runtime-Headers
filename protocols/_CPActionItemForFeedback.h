
@protocol _CPActionItemForFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPPunchoutForFeedback *)punchout;
- (void)setPunchout:(_CPPunchoutForFeedback *)arg1;

@end
