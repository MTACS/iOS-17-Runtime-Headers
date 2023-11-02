
@interface _INPBUpdateEventIntent : PBCodable <NSCopying, NSSecureCoding, _INPBUpdateEventIntent> {
    NSArray * _addParticipants;
    struct { 
        unsigned int removeLocation : 1; 
        unsigned int updateAllOccurrences : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _removeLocation;
    NSArray * _removeParticipants;
    _INPBDateTimeRangeValue * _setDateTimeRange;
    _INPBLocation * _setLocation;
    NSString * _setTitle;
    NSString * _targetEventIdentifier;
    bool  _updateAllOccurrences;
}

@property (nonatomic, copy) NSArray *addParticipants;
@property (nonatomic, readonly) unsigned long long addParticipantsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasRemoveLocation;
@property (nonatomic, readonly) bool hasSetDateTimeRange;
@property (nonatomic, readonly) bool hasSetLocation;
@property (nonatomic, readonly) bool hasSetTitle;
@property (nonatomic, readonly) bool hasTargetEventIdentifier;
@property (nonatomic) bool hasUpdateAllOccurrences;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool removeLocation;
@property (nonatomic, copy) NSArray *removeParticipants;
@property (nonatomic, readonly) unsigned long long removeParticipantsCount;
@property (nonatomic, retain) _INPBDateTimeRangeValue *setDateTimeRange;
@property (nonatomic, retain) _INPBLocation *setLocation;
@property (nonatomic, copy) NSString *setTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetEventIdentifier;
@property (nonatomic) bool updateAllOccurrences;

+ (Class)addParticipantsType;
+ (Class)removeParticipantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAddParticipants:(id)arg1;
- (id)addParticipants;
- (id)addParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addParticipantsCount;
- (void)addRemoveParticipants:(id)arg1;
- (void)clearAddParticipants;
- (void)clearRemoveParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasRemoveLocation;
- (bool)hasSetDateTimeRange;
- (bool)hasSetLocation;
- (bool)hasSetTitle;
- (bool)hasTargetEventIdentifier;
- (bool)hasUpdateAllOccurrences;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)removeLocation;
- (id)removeParticipants;
- (id)removeParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeParticipantsCount;
- (void)setAddParticipants:(id)arg1;
- (id)setDateTimeRange;
- (void)setHasRemoveLocation:(bool)arg1;
- (void)setHasUpdateAllOccurrences:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)setLocation;
- (void)setRemoveLocation:(bool)arg1;
- (void)setRemoveParticipants:(id)arg1;
- (void)setSetDateTimeRange:(id)arg1;
- (void)setSetLocation:(id)arg1;
- (void)setSetTitle:(id)arg1;
- (void)setTargetEventIdentifier:(id)arg1;
- (id)setTitle;
- (void)setUpdateAllOccurrences:(bool)arg1;
- (id)targetEventIdentifier;
- (bool)updateAllOccurrences;
- (void)writeTo:(id)arg1;

@end
