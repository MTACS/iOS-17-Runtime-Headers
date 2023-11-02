
@interface PXSearchQueryMatchInfo : NSObject <NSCopying> {
    NSSet * _audioIdentifiers;
    NSSet * _humanActionIdentifiers;
    NSString * _identifier;
    NSString * _localizedQueryString;
    NSArray * _ocrAssetUUIDs;
    NSArray * _ocrTexts;
    NSSet * _personLocalIdentifiers;
    NSSet * _sceneIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *audioIdentifiers;
@property (nonatomic, readonly, copy) NSSet *humanActionIdentifiers;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedQueryString;
@property (nonatomic, readonly, copy) NSArray *ocrAssetUUIDs;
@property (nonatomic, readonly, copy) NSArray *ocrTexts;
@property (nonatomic, readonly, copy) NSSet *personLocalIdentifiers;
@property (nonatomic, readonly, copy) NSSet *sceneIdentifiers;

- (void).cxx_destruct;
- (id)audioIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)humanActionIdentifiers;
- (id)identifier;
- (id)initWithLocalizedQueryString:(id)arg1 matchedSceneIdentifiers:(id)arg2 personLocalIdentifiers:(id)arg3 audioIdentifiers:(id)arg4 humanActionIdentifiers:(id)arg5 ocrTexts:(id)arg6 ocrAssetUUIDS:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)localizedQueryString;
- (id)ocrAssetUUIDs;
- (id)ocrTexts;
- (id)personLocalIdentifiers;
- (id)sceneIdentifiers;

@end
