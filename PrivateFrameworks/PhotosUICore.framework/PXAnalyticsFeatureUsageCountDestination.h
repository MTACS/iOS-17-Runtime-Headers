
@interface PXAnalyticsFeatureUsageCountDestination : NSObject <CPAnalyticsDestinationProtocol> {
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)photoLibrary;
- (void)processEvent:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
