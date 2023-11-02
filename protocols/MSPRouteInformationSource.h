
@protocol MSPRouteInformationSource <NSObject>

@required

- (GEOStorageRouteRequestStorage *)ifGEOStorageRouteRequestStorage;
- (MSPRidesharingInformationSource *)ifRidesharingInformationSource;

@end
