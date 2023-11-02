
@interface _SFPBScene : PBCodable <NSSecureCoding, _SFPBScene> {
    unsigned long long  _sceneIdentifier;
    int  _sceneType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long sceneIdentifier;
@property (nonatomic) int sceneType;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sceneIdentifier;
- (int)sceneType;
- (void)setSceneIdentifier:(unsigned long long)arg1;
- (void)setSceneType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
