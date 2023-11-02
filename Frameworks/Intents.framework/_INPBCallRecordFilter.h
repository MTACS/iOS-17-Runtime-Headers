
@interface _INPBCallRecordFilter : PBCodable <NSCopying, NSSecureCoding, _INPBCallRecordFilter> {
    int  _callCapability;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _callTypes;
    struct { 
        unsigned int callCapability : 1; 
        unsigned int preferredCallProvider : 1; 
    }  _has;
    NSArray * _participants;
    int  _preferredCallProvider;
}

@property (nonatomic) int callCapability;
@property (nonatomic, readonly) int*callTypes;
@property (nonatomic, readonly) unsigned long long callTypesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCallCapability;
@property (nonatomic) bool hasPreferredCallProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (nonatomic) int preferredCallProvider;
@property (readonly) Class superclass;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsCallCapability:(id)arg1;
- (int)StringAsCallTypes:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (void)addCallTypes:(int)arg1;
- (void)addParticipants:(id)arg1;
- (int)callCapability;
- (id)callCapabilityAsString:(int)arg1;
- (int*)callTypes;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callTypesCount;
- (void)clearCallTypes;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallCapability;
- (bool)hasPreferredCallProvider;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)writeTo:(id)arg1;

@end
