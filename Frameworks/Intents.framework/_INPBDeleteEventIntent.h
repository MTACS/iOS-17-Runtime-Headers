
@interface _INPBDeleteEventIntent : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteEventIntent> {
    bool  _deleteAllOccurrences;
    struct { 
        unsigned int deleteAllOccurrences : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSString * _targetEventIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleteAllOccurrences;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDeleteAllOccurrences;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetEventIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetEventIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteAllOccurrences;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDeleteAllOccurrences;
- (bool)hasIntentMetadata;
- (bool)hasTargetEventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeleteAllOccurrences:(bool)arg1;
- (void)setHasDeleteAllOccurrences:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetEventIdentifier:(id)arg1;
- (id)targetEventIdentifier;
- (void)writeTo:(id)arg1;

@end
