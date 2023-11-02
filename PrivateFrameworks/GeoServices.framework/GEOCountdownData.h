
@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _alternateCountdownTypes;
    NSMutableArray * _alternateFormatStrings;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_alternateCountdownTypes : 1; 
        unsigned int read_timestampValues : 1; 
        unsigned int read_alternateFormatStrings : 1; 
        unsigned int read_separator : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _separator;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timestampValues;
    NSString * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*alternateCountdownTypes;
@property (nonatomic, readonly) unsigned long long alternateCountdownTypesCount;
@property (nonatomic, retain) NSMutableArray *alternateFormatStrings;
@property (nonatomic, readonly) NSDictionary *alternativeFormatStringsByType;
@property (nonatomic, readonly) long long countdownType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSeparator;
@property (nonatomic, readonly) bool hasTimezone;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *separator;
@property (nonatomic, retain) NSString *separator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int*timestampValues;
@property (nonatomic, readonly) unsigned long long timestampValuesCount;
@property (nonatomic, readonly) NSArray *timestamps;
@property (nonatomic, retain) NSString *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)alternateFormatStringType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAlternateCountdownTypes:(id)arg1;
- (long long)_convertFrom:(int)arg1;
- (void)addAlternateCountdownType:(int)arg1;
- (void)addAlternateFormatString:(id)arg1;
- (void)addTimestampValue:(unsigned int)arg1;
- (int)alternateCountdownTypeAtIndex:(unsigned long long)arg1;
- (int*)alternateCountdownTypes;
- (id)alternateCountdownTypesAsString:(int)arg1;
- (unsigned long long)alternateCountdownTypesCount;
- (id)alternateFormatStringAtIndex:(unsigned long long)arg1;
- (id)alternateFormatStrings;
- (unsigned long long)alternateFormatStringsCount;
- (id)alternativeFormatStringsByType;
- (void)clearAlternateCountdownTypes;
- (void)clearAlternateFormatStrings;
- (void)clearTimestampValues;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countdownType;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSeparator;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)separator;
- (void)setAlternateCountdownTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAlternateFormatStrings:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTimestampValues:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTimezone:(id)arg1;
- (unsigned int)timestampValueAtIndex:(unsigned long long)arg1;
- (unsigned int*)timestampValues;
- (unsigned long long)timestampValuesCount;
- (id)timestamps;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
