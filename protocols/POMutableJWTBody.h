
@protocol POMutableJWTBody <POJWTBody>

@required

- (NSData *)dataRepresentation;
- (id)mutableCopy;

@end
