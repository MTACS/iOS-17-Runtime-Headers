
@interface ICLocation : NSManagedObject {
    CLPlacemark * _placemark;
    bool  updatingPlace;
}

@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) CLPlacemark *placemark;
@property (nonatomic, retain) NSData *placemarkData;
@property (nonatomic) bool updatingPlace;

+ (id)searchStringsForPlacemark:(id)arg1;

- (void).cxx_destruct;
- (void)didTurnIntoFault;
- (id)formattedAddress;
- (id)placemark;
- (id)searchStrings;
- (void)setLocationFromPlacemark:(id)arg1;
- (void)setLocationFromURL:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setUpdatingPlace:(bool)arg1;
- (bool)updatingPlace;

@end
