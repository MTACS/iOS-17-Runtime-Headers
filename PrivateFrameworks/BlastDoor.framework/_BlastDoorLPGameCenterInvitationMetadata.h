
@interface _BlastDoorLPGameCenterInvitationMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _game;
    _BlastDoorLPImage * _icon;
    _BlastDoorLPImage * _image;
    unsigned int  _maximumNumberOfPlayers;
    unsigned int  _minimumNumberOfPlayers;
    unsigned int  _numberOfPlayers;
}

@property (nonatomic, copy) NSString *game;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, retain) _BlastDoorLPImage *image;
@property (nonatomic) unsigned int maximumNumberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers;
@property (nonatomic) unsigned int numberOfPlayers;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maximumNumberOfPlayers;
- (unsigned int)minimumNumberOfPlayers;
- (unsigned int)numberOfPlayers;
- (void)setGame:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumNumberOfPlayers:(unsigned int)arg1;
- (void)setMinimumNumberOfPlayers:(unsigned int)arg1;
- (void)setNumberOfPlayers:(unsigned int)arg1;

@end
