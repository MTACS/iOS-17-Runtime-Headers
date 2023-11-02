
@interface _INPBMessageReaction : PBCodable <NSCopying, NSSecureCoding, _INPBMessageReaction> {
    struct { 
        unsigned int reactionType : 1; 
    }  _has;
    NSString * _reactionDescription;
    int  _reactionType;
    _INPBMessage * _referencedMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasReactionDescription;
@property (nonatomic) bool hasReactionType;
@property (nonatomic, readonly) bool hasReferencedMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reactionDescription;
@property (nonatomic) int reactionType;
@property (nonatomic, retain) _INPBMessage *referencedMessage;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsReactionType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReactionDescription;
- (bool)hasReactionType;
- (bool)hasReferencedMessage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reactionDescription;
- (int)reactionType;
- (id)reactionTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedMessage;
- (void)setHasReactionType:(bool)arg1;
- (void)setReactionDescription:(id)arg1;
- (void)setReactionType:(int)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
