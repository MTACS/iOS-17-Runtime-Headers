
@interface SFSportsTeam : NSObject <NSCopying, NSSecureCoding, SFSportsTeam> {
    NSString * _accessibilityDescription;
    SFButtonItem * _button;
    struct { 
        unsigned int isWinner : 1; 
    }  _has;
    bool  _isWinner;
    SFImage * _logo;
    NSString * _name;
    NSString * _record;
    NSString * _score;
}

@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic, retain) SFButtonItem *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWinner;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFImage *logo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *record;
@property (nonatomic, copy) NSString *score;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)button;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsWinner;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isWinner;
- (id)jsonData;
- (id)logo;
- (id)name;
- (id)record;
- (id)score;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setIsWinner:(bool)arg1;
- (void)setLogo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setScore:(id)arg1;

@end
