
@interface _SFPBToggleAudioCommand : PBCodable <NSSecureCoding, _SFPBToggleAudioCommand> {
    NSString * _localMediaIdentifier;
    int  _mediaEntityType;
    NSString * _persistentIdentifier;
    NSString * _universalLibraryIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *universalLibraryIdentifier;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localMediaIdentifier;
- (int)mediaEntityType;
- (id)persistentIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setMediaEntityType:(int)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setUniversalLibraryIdentifier:(id)arg1;
- (id)universalLibraryIdentifier;
- (void)writeTo:(id)arg1;

@end
