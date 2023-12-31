
@interface AWDSymptomsDiagnosticIncidentReport : PBCodable <NSCopying> {
    int  _dampeningType;
    NSString * _detectedName;
    NSString * _domain;
    unsigned long long  _duration;
    NSString * _effectiveName;
    NSString * _groupIdentifier;
    int  _handledResult;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
        unsigned int dampeningType : 1; 
        unsigned int handledResult : 1; 
    }  _has;
    NSString * _identifier;
    NSMutableArray * _incidentEvents;
    NSMutableArray * _relatedNames;
    NSString * _subtype;
    NSString * _subtypeContext;
    unsigned long long  _timestamp;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timestampsIncidentEvents;
    NSString * _type;
    unsigned long long  _version;
}

@property (nonatomic) int dampeningType;
@property (nonatomic, retain) NSString *detectedName;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) NSString *effectiveName;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic) int handledResult;
@property (nonatomic) bool hasDampeningType;
@property (nonatomic, readonly) bool hasDetectedName;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasEffectiveName;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic) bool hasHandledResult;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasSubtype;
@property (nonatomic, readonly) bool hasSubtypeContext;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *incidentEvents;
@property (nonatomic, retain) NSMutableArray *relatedNames;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *subtypeContext;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long*timestampsIncidentEvents;
@property (nonatomic, readonly) unsigned long long timestampsIncidentEventsCount;
@property (nonatomic, retain) NSString *type;
@property (nonatomic) unsigned long long version;

+ (Class)incidentEventsType;
+ (Class)relatedNamesType;

- (void).cxx_destruct;
- (int)StringAsDampeningType:(id)arg1;
- (int)StringAsHandledResult:(id)arg1;
- (void)addIncidentEvents:(id)arg1;
- (void)addRelatedNames:(id)arg1;
- (void)addTimestampsIncidentEvents:(unsigned long long)arg1;
- (void)clearIncidentEvents;
- (void)clearRelatedNames;
- (void)clearTimestampsIncidentEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dampeningType;
- (id)dampeningTypeAsString:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)detectedName;
- (id)dictionaryRepresentation;
- (id)domain;
- (unsigned long long)duration;
- (id)effectiveName;
- (id)groupIdentifier;
- (int)handledResult;
- (id)handledResultAsString:(int)arg1;
- (bool)hasDampeningType;
- (bool)hasDetectedName;
- (bool)hasDomain;
- (bool)hasDuration;
- (bool)hasEffectiveName;
- (bool)hasGroupIdentifier;
- (bool)hasHandledResult;
- (bool)hasIdentifier;
- (bool)hasSubtype;
- (bool)hasSubtypeContext;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)identifier;
- (id)incidentEvents;
- (id)incidentEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentEventsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedNames;
- (id)relatedNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedNamesCount;
- (void)setDampeningType:(int)arg1;
- (void)setDetectedName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEffectiveName:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHandledResult:(int)arg1;
- (void)setHasDampeningType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHandledResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncidentEvents:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setSubtypeContext:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimestampsIncidentEvents:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setType:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)subtype;
- (id)subtypeContext;
- (unsigned long long)timestamp;
- (unsigned long long*)timestampsIncidentEvents;
- (unsigned long long)timestampsIncidentEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)timestampsIncidentEventsCount;
- (id)type;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
