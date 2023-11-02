
@interface _INPBCustomObject : PBCodable <NSCopying, NSSecureCoding, _INPBCustomObject> {
    NSArray * _alternatives;
    _INPBImageValue * _displayImage;
    NSString * _displayString;
    struct { }  _has;
    NSString * _identifier;
    NSString * _pronunciationHint;
    NSString * _subtitleString;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBImageValue *displayImage;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, readonly) bool hasDisplayImage;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPronunciationHint;
@property (nonatomic, readonly) bool hasSubtitleString;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *pronunciationHint;
@property (nonatomic, copy) NSString *subtitleString;
@property (readonly) Class superclass;

+ (Class)alternativeType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlternative:(id)arg1;
- (id)alternativeAtIndex:(unsigned long long)arg1;
- (id)alternatives;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayImage;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDisplayImage;
- (bool)hasDisplayString;
- (bool)hasIdentifier;
- (bool)hasPronunciationHint;
- (bool)hasSubtitleString;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pronunciationHint;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setDisplayImage:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPronunciationHint:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (id)subtitleString;
- (void)writeTo:(id)arg1;

@end
