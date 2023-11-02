
@interface GDGraphLocationLatLongRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allLatitude;
    NSArray * _allLongitude;
    NSNumber * _latitude;
    NSNumber * _longitude;
}

@property (nonatomic, readonly, copy) NSArray *allLatitude;
@property (nonatomic, readonly, copy) NSArray *allLongitude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *latitude;
@property (nonatomic, readonly, copy) NSNumber *longitude;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allLatitude;
- (id)allLongitude;
- (Class)graphObjectType;
- (id)initWithLatitudeField:(id)arg1 longitudeField:(id)arg2 allLatitudeField:(id)arg3 allLongitudeField:(id)arg4;
- (id)latitude;
- (id)longitude;

@end
