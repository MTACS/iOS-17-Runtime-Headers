
@protocol FSFCurareInteraction

@required

+ (id)deserialize:(NSData *)arg1 dataVersion:(unsigned int)arg2 interactionId:(NSString *)arg3;

- (unsigned int)dataVersion;
- (NSString *)interactionId;
- (NSString *)json;
- (NSData *)serialize;

@end
