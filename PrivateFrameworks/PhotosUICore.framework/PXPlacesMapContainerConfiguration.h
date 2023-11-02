
@interface PXPlacesMapContainerConfiguration : NSObject <PXMutablePlacesMapContainerConfiguration> {
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _initialCoordinateRegion;
    bool  enableNearbyAssetsAffordance;
    bool  gridViewEnabled;
    NSString * localizedNavigationItemTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableNearbyAssetsAffordance;
@property (nonatomic) bool gridViewEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } initialCoordinateRegion;
@property (nonatomic, retain) NSString *localizedNavigationItemTitle;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (bool)enableNearbyAssetsAffordance;
- (bool)gridViewEnabled;
- (id)init;
- (id)initWithConfiguration:(id /* block */)arg1;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })initialCoordinateRegion;
- (id)localizedNavigationItemTitle;
- (void)setEnableNearbyAssetsAffordance:(bool)arg1;
- (void)setGridViewEnabled:(bool)arg1;
- (void)setInitialCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLocalizedNavigationItemTitle:(id)arg1;

@end
