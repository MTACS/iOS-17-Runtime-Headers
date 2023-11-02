
@protocol _INPBResolveObjectReferenceResponse <NSObject>

@required

- (bool)hasResolvedReference;
- (NSData *)resolvedReference;
- (void)setResolvedReference:(NSData *)arg1;

@end
