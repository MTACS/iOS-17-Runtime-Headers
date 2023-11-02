
@interface PXPlacesMapThumbnailLocationCurator : NSObject <PXPlacesMapThumbnailCurationDelegate> {
    unsigned long long  _curatedThumbnailsLimit;
    Class  _locationCuratorClass;
}

@property (nonatomic, readonly) unsigned long long curatedThumbnailsLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class locationCuratorClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)curatedGeotaggableFromSet:(id)arg1;
- (unsigned long long)curatedThumbnailsLimit;
- (id)init;
- (id)initWithLocationCuratorClass:(Class)arg1 curatedThumbnailsLimit:(unsigned long long)arg2;
- (Class)locationCuratorClass;

@end
