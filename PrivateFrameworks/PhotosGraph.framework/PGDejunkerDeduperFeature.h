
@interface PGDejunkerDeduperFeature : NSObject <NSCopying> {
    bool  _isVideo;
    NSSet * _peopleScenes;
    NSSet * _personLocalIdentifiers;
}

@property (readonly) bool hasPeopleScenes;
@property (readonly) bool hasPersons;
@property (readonly) bool isVideo;
@property (readonly) NSSet *peopleScenes;
@property (readonly) NSSet *personLocalIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasPeopleScenes;
- (bool)hasPersons;
- (unsigned long long)hash;
- (long long)identicalSimilarity;
- (id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isVideo;
- (id)peopleScenes;
- (id)personLocalIdentifiers;

@end
