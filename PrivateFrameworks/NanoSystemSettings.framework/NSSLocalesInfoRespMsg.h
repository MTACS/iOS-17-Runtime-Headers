
@interface NSSLocalesInfoRespMsg : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSMutableArray * _defaultCalendars;
    NSMutableArray * _localeIdentifiers;
    NSMutableArray * _numberingSystems;
    NSMutableArray * _supportedCalendars;
    NSMutableArray * _systemLanguages;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSMutableArray *defaultCalendars;
@property (nonatomic, readonly) bool hasBuildVersion;
@property (nonatomic, retain) NSMutableArray *localeIdentifiers;
@property (nonatomic, retain) NSMutableArray *numberingSystems;
@property (nonatomic, retain) NSMutableArray *supportedCalendars;
@property (nonatomic, retain) NSMutableArray *systemLanguages;

+ (Class)defaultCalendarsType;
+ (Class)localeIdentifiersType;
+ (Class)numberingSystemsType;
+ (Class)supportedCalendarsType;
+ (Class)systemLanguagesType;

- (void).cxx_destruct;
- (void)addDefaultCalendars:(id)arg1;
- (void)addLocaleIdentifiers:(id)arg1;
- (void)addNumberingSystems:(id)arg1;
- (void)addSupportedCalendars:(id)arg1;
- (void)addSystemLanguages:(id)arg1;
- (id)buildVersion;
- (void)clearDefaultCalendars;
- (void)clearLocaleIdentifiers;
- (void)clearNumberingSystems;
- (void)clearSupportedCalendars;
- (void)clearSystemLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultCalendars;
- (id)defaultCalendarsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultCalendarsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifiers;
- (id)localeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)localeIdentifiersCount;
- (void)mergeFrom:(id)arg1;
- (id)numberingSystems;
- (id)numberingSystemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberingSystemsCount;
- (bool)readFrom:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDefaultCalendars:(id)arg1;
- (void)setLocaleIdentifiers:(id)arg1;
- (void)setNumberingSystems:(id)arg1;
- (void)setSupportedCalendars:(id)arg1;
- (void)setSystemLanguages:(id)arg1;
- (id)supportedCalendars;
- (id)supportedCalendarsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCalendarsCount;
- (id)systemLanguages;
- (id)systemLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemLanguagesCount;
- (void)writeTo:(id)arg1;

@end
