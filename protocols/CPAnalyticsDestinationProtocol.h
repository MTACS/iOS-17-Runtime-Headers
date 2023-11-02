
@protocol CPAnalyticsDestinationProtocol <NSObject>

@required

- (void)processEvent:(id <CPAnalyticsEventProtocol>)arg1;

@optional

- (void)setPhotoLibrary:(PHPhotoLibrary *)arg1;

@end
