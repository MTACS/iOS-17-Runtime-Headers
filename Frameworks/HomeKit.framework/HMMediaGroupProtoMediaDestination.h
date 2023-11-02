
@interface HMMediaGroupProtoMediaDestination : PBCodable <NSCopying> {
    NSString * _audioGroupIdentifier;
    struct { 
        unsigned int supportedOptions : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _parentIdentifier;
    unsigned long long  _supportedOptions;
}

@property (nonatomic, retain) NSString *audioGroupIdentifier;
@property (nonatomic, readonly) bool hasAudioGroupIdentifier;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic) bool hasSupportedOptions;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *parentIdentifier;
@property (nonatomic) unsigned long long supportedOptions;

- (void).cxx_destruct;
- (id)audioGroupIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioGroupIdentifier;
- (bool)hasIdentifier;
- (bool)hasParentIdentifier;
- (bool)hasSupportedOptions;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAudioGroupIdentifier:(id)arg1;
- (void)setHasSupportedOptions:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (unsigned long long)supportedOptions;
- (void)writeTo:(id)arg1;

@end
