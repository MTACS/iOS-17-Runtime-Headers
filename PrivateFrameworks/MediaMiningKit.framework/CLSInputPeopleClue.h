
@interface CLSInputPeopleClue : CLSInputClue {
    bool  _includeMergeCandidates;
    unsigned long long  _numberOfFaces;
    CLSPersonIdentity * _person;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic) bool includeMergeCandidates;
@property (nonatomic) unsigned long long numberOfFaces;
@property (nonatomic, retain) CLSPersonIdentity *person;
@property (nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)clueWithConsolidatedPersonLocalIdentifier:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)clueWithPeople:(id)arg1;
+ (id)clueWithPersonContactIdentifier:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)clueWithPersonLocalIdentifier:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithConsolidatedPersonLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithPeoples:(id)arg1;
+ (id)cluesWithPersonLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2;

- (void).cxx_destruct;
- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (id)description;
- (bool)includeMergeCandidates;
- (bool)isEqualToClue:(id)arg1;
- (id)name;
- (unsigned long long)numberOfFaces;
- (id)person;
- (id)photoLibrary;
- (void)setIncludeMergeCandidates:(bool)arg1;
- (void)setNumberOfFaces:(unsigned long long)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
