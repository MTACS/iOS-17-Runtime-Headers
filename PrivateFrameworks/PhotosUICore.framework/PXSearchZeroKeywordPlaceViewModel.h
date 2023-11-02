
@interface PXSearchZeroKeywordPlaceViewModel : PXSearchZeroKeywordBaseViewModel {
    NSArray * _keyAssetLocalIdentifiers;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
}

@property (nonatomic, readonly) NSArray *keyAssetLocalIdentifiers;
@property (nonatomic, readonly) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 representedObject:(id)arg2 fullGeoLocationName:(id)arg3 keyAssetLocalIdentifiers:(id)arg4 region:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 fullGeoLocationName:(id)arg4 keyAssetLocalIdentifiers:(id)arg5 region:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)keyAssetLocalIdentifiers;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;

@end
