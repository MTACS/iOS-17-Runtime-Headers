
@interface _SFPBSportsTeam : PBCodable <NSSecureCoding, _SFPBSportsTeam> {
    NSString * _accessibilityDescription;
    _SFPBButtonItem * _button;
    bool  _isWinner;
    _SFPBImage * _logo;
    NSString * _name;
    NSString * _record;
    NSString * _score;
}

@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic, retain) _SFPBButtonItem *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWinner;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBImage *logo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *record;
@property (nonatomic, copy) NSString *score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)button;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isWinner;
- (id)jsonData;
- (id)logo;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)record;
- (id)score;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setIsWinner:(bool)arg1;
- (void)setLogo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setScore:(id)arg1;
- (void)writeTo:(id)arg1;

@end
