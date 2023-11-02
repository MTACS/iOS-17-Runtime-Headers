
@interface _INPBSearchCallHistoryIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSearchCallHistoryIntent> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _callCapabilities;
    int  _callType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _callTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _capabilities;
    _INPBDateTimeRange * _dateCreated;
    struct { 
        unsigned int callType : 1; 
        unsigned int preferredCallProvider : 1; 
        unsigned int unseen : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _preferredCallProvider;
    _INPBContact * _recipient;
    _INPBContact * _targetContact;
    bool  _unseen;
}

@property (nonatomic, readonly) int*callCapabilities;
@property (nonatomic, readonly) unsigned long long callCapabilitiesCount;
@property (nonatomic) int callType;
@property (nonatomic, readonly) int*callTypes;
@property (nonatomic, readonly) unsigned long long callTypesCount;
@property (nonatomic, readonly) int*capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesCount;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCallType;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic, readonly) bool hasRecipient;
@property (nonatomic, readonly) bool hasTargetContact;
@property (nonatomic) bool hasUnseen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic, retain) _INPBContact *recipient;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBContact *targetContact;
@property (nonatomic) bool unseen;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsCallCapabilities:(id)arg1;
- (int)StringAsCallType:(id)arg1;
- (int)StringAsCallTypes:(id)arg1;
- (int)StringAsCapabilities:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)addCallTypes:(int)arg1;
- (void)addCapabilities:(int)arg1;
- (int*)callCapabilities;
- (id)callCapabilitiesAsString:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callCapabilitiesCount;
- (int)callType;
- (id)callTypeAsString:(int)arg1;
- (int*)callTypes;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callTypesCount;
- (int*)capabilities;
- (id)capabilitiesAsString:(int)arg1;
- (int)capabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)capabilitiesCount;
- (void)clearCallCapabilities;
- (void)clearCallTypes;
- (void)clearCapabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallType;
- (bool)hasDateCreated;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasRecipient;
- (bool)hasTargetContact;
- (bool)hasUnseen;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipient;
- (void)setCallCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCallType:(int)arg1;
- (void)setCallTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDateCreated:(id)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecipient:(id)arg1;
- (void)setTargetContact:(id)arg1;
- (void)setUnseen:(bool)arg1;
- (id)targetContact;
- (bool)unseen;
- (void)writeTo:(id)arg1;

@end
