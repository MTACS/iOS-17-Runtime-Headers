
@interface CLPlacemarkInternal : NSObject {
    unsigned long long  _cLMapItemSource;
    NSData * _geoMapItemHandle;
    NSDictionary * addressDictionary;
    NSArray * areasOfInterest;
    GEOMapItemStorage * geoMapItemStorage;
    CLLocation * location;
    NSString * mecardAddress;
    CLRegion * region;
    NSTimeZone * timeZone;
}

- (id)init;

@end
