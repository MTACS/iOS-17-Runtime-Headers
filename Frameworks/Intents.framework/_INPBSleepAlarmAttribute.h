
@interface _INPBSleepAlarmAttribute : PBCodable <NSCopying, NSSecureCoding, _INPBSleepAlarmAttribute> {
    _INPBDateTime * _bedtime;
    struct { 
        unsigned int override : 1; 
    }  _has;
    bool  _override;
}

@property (nonatomic, retain) _INPBDateTime *bedtime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBedtime;
@property (nonatomic) bool hasOverride;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool override;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bedtime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBedtime;
- (bool)hasOverride;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)override;
- (bool)readFrom:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setHasOverride:(bool)arg1;
- (void)setOverride:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
