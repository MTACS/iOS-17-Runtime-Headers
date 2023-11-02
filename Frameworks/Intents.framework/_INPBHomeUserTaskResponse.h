
@interface _INPBHomeUserTaskResponse : PBCodable <NSCopying, NSSecureCoding, _INPBHomeUserTaskResponse> {
    struct { 
        unsigned int taskOutcome : 1; 
    }  _has;
    int  _taskOutcome;
    _INPBHomeUserTask * _userTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTaskOutcome;
@property (nonatomic, readonly) bool hasUserTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int taskOutcome;
@property (nonatomic, retain) _INPBHomeUserTask *userTask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsTaskOutcome:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTaskOutcome;
- (bool)hasUserTask;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTaskOutcome:(bool)arg1;
- (void)setTaskOutcome:(int)arg1;
- (void)setUserTask:(id)arg1;
- (int)taskOutcome;
- (id)taskOutcomeAsString:(int)arg1;
- (id)userTask;
- (void)writeTo:(id)arg1;

@end
