
@interface PUWallpaperNightlySuggestionsPosterConfiguration : NSObject <NSCopying, PUWallpaperNightlySuggestionsPosterConfiguration> {
    bool  _includeCityscapes;
    bool  _includeLandscapes;
    bool  _includePets;
    NSString * _name;
    NSSet * _personLocalIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeCityscapes;
@property (nonatomic) bool includeLandscapes;
@property (nonatomic) bool includePets;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSSet *personLocalIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)includeCityscapes;
- (bool)includeLandscapes;
- (bool)includePets;
- (id)initWithName:(id)arg1 personLocalIdentifiers:(id)arg2 includePets:(bool)arg3 includeLandscapes:(bool)arg4 includeCityscapes:(bool)arg5;
- (id)name;
- (id)personLocalIdentifiers;
- (void)setIncludeCityscapes:(bool)arg1;
- (void)setIncludeLandscapes:(bool)arg1;
- (void)setIncludePets:(bool)arg1;
- (void)setPersonLocalIdentifiers:(id)arg1;

@end
