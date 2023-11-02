
@protocol MSPTransferableToImmutable <NSObject>

@required

- (id)copyIfValidWithError:(out id*)arg1;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
