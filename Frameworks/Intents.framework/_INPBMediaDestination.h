
@interface _INPBMediaDestination : PBCodable <NSCopying, NSSecureCoding, _INPBMediaDestination> {
    struct { 
        unsigned int mediaDestinationType : 1; 
    }  _has;
    int  _mediaDestinationType;
    _INPBString * _playlistName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMediaDestinationType;
@property (nonatomic, readonly) bool hasPlaylistName;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mediaDestinationType;
@property (nonatomic, retain) _INPBString *playlistName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsMediaDestinationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMediaDestinationType;
- (bool)hasPlaylistName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)mediaDestinationType;
- (id)mediaDestinationTypeAsString:(int)arg1;
- (id)playlistName;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaDestinationType:(bool)arg1;
- (void)setMediaDestinationType:(int)arg1;
- (void)setPlaylistName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
