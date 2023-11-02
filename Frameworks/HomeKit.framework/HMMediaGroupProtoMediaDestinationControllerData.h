
@interface HMMediaGroupProtoMediaDestinationControllerData : PBCodable <NSCopying> {
    NSMutableArray * _availableDestinations;
    NSString * _destinationIdentifier;
    struct { 
        unsigned int supportedOptions : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _parentIdentifier;
    unsigned long long  _supportedOptions;
}

@property (nonatomic, retain) NSMutableArray *availableDestinations;
@property (nonatomic, retain) NSString *destinationIdentifier;
@property (nonatomic, readonly) bool hasDestinationIdentifier;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic) bool hasSupportedOptions;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *parentIdentifier;
@property (nonatomic) unsigned long long supportedOptions;

+ (Class)availableDestinationsType;

- (void).cxx_destruct;
- (void)addAvailableDestinations:(id)arg1;
- (id)availableDestinations;
- (id)availableDestinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableDestinationsCount;
- (void)clearAvailableDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasDestinationIdentifier;
- (bool)hasIdentifier;
- (bool)hasParentIdentifier;
- (bool)hasSupportedOptions;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAvailableDestinations:(id)arg1;
- (void)setDestinationIdentifier:(id)arg1;
- (void)setHasSupportedOptions:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (unsigned long long)supportedOptions;
- (void)writeTo:(id)arg1;

@end
