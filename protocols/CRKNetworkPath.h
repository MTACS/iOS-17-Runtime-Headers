
@protocol CRKNetworkPath <NSObject>

@required

- (NSArray *)interfaces;
- (bool)isSatisfied;

@end
