
@interface CLSFocusPeopleCache : NSObject {
    unsigned long long  _maximumNumberOfPeople;
    NSSet * _personLocalIdentifiers;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic) unsigned long long maximumNumberOfPeople;
@property (nonatomic, readonly) NSSet *personLocalIdentifiers;
@property (nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)_personSortDescriptors;

- (void).cxx_destruct;
- (id)_collectValidPersonLocalIdentifiers;
- (id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2;
- (void)invalidate;
- (unsigned long long)maximumNumberOfPeople;
- (id)personLocalIdentifiers;
- (id)photoLibrary;
- (void)setMaximumNumberOfPeople:(unsigned long long)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
