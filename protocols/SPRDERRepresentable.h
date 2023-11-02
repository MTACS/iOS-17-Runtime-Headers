
@protocol SPRDERRepresentable

@required

- (NSData *)derRepresentation;
- (id)initWithDERRepresentation:(NSData *)arg1 error:(id*)arg2;

@end
