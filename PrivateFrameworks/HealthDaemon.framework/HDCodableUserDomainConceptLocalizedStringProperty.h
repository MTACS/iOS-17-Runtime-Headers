
@interface HDCodableUserDomainConceptLocalizedStringProperty : PBCodable <NSCopying> {
    bool  _deleted;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
        unsigned int version : 1; 
        unsigned int deleted : 1; 
    }  _has;
    NSString * _locale;
    NSString * _stringValue;
    double  _timestamp;
    long long  _type;
    long long  _version;
}

@property (nonatomic) bool deleted;
@property (nonatomic) bool hasDeleted;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeleted;
- (bool)hasLocale;
- (bool)hasStringValue;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (id)stringValue;
- (double)timestamp;
- (long long)type;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
