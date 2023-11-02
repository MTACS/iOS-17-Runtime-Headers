
@interface _INPBResetTimerIntent : PBCodable <NSCopying, NSSecureCoding, _INPBResetTimerIntent> {
    struct { 
        unsigned int resetMultiple : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _resetMultiple;
    _INPBTimer * _targetTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasResetMultiple;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool resetMultiple;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasResetMultiple;
- (bool)hasTargetTimer;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)resetMultiple;
- (void)setHasResetMultiple:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setResetMultiple:(bool)arg1;
- (void)setTargetTimer:(id)arg1;
- (id)targetTimer;
- (void)writeTo:(id)arg1;

@end
