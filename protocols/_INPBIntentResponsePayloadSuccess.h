
@protocol _INPBIntentResponsePayloadSuccess <NSObject>

@required

- (bool)hasResponseMessageData;
- (bool)hasResponseTypeName;
- (bool)hasShouldOpenContainingApplication;
- (NSData *)responseMessageData;
- (NSString *)responseTypeName;
- (void)setHasShouldOpenContainingApplication:(bool)arg1;
- (void)setResponseMessageData:(NSData *)arg1;
- (void)setResponseTypeName:(NSString *)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;

@end
