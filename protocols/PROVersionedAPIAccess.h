
@protocol PROVersionedAPIAccess <NSObject>

@required

- (<PROAPIObject> *)apiForProtocol:(id*)arg1 versions:(NSArray *)arg2;
- (bool)validateProtocols:(NSArray *)arg1;

@end
