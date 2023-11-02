
@interface HMIFFArchive : HMFObject {
    NSArray * _allPersonsAndFaceCrops;
    NSDictionary * _ffData;
    NSArray * _homePersonsAndFaceCrops;
    NSArray * _photosPersonsAndFaceCrops;
}

@property (readonly) NSArray *allPersons;
@property (readonly) NSArray *allPersonsAndFaceCrops;
@property (readonly) NSDictionary *ffData;
@property (readonly) NSArray *homePersons;
@property (readonly) NSArray *homePersonsAndFaceCrops;
@property (readonly) NSArray *photosPersons;
@property (readonly) NSArray *photosPersonsAndFaceCrops;

- (void).cxx_destruct;
- (id)allPersons;
- (id)allPersonsAndFaceCrops;
- (id)faceCropsForPerson:(id)arg1;
- (id)ffData;
- (id)homePersons;
- (id)homePersonsAndFaceCrops;
- (id)initWithJSONPath:(id)arg1 error:(id*)arg2;
- (id)photosPersons;
- (id)photosPersonsAndFaceCrops;
- (id)sourceUUIDForPerson:(id)arg1;

@end
