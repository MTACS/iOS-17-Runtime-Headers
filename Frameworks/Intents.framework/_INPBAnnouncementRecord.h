
@interface _INPBAnnouncementRecord : PBCodable <NSCopying, NSSecureCoding, _INPBAnnouncementRecord> {
    double  _duration;
    struct { 
        unsigned int duration : 1; 
    }  _has;
    NSString * _identifier;
    _INPBHomeFilter * _originator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasOriginator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBHomeFilter *originator;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDuration;
- (bool)hasIdentifier;
- (bool)hasOriginator;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originator;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)writeTo:(id)arg1;

@end
