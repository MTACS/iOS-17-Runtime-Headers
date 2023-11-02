
@protocol _INPBResolveObjectReferenceIntentResponse <NSObject>

@required

- (bool)hasResolvedReferences;
- (NSData *)resolvedReferences;
- (void)setResolvedReferences:(NSData *)arg1;

@end
