
@protocol CRKNetworkPathMonitor <NSObject, CRKResumable, CRKCancelable>

@required

- (<CRKNetworkPath> *)path;

@end
