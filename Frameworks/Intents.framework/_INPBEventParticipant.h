
@interface _INPBEventParticipant : PBCodable <NSCopying, NSSecureCoding, _INPBEventParticipant> {
    struct { 
        unsigned int isEventOrganizer : 1; 
        unsigned int isUser : 1; 
        unsigned int status : 1; 
    }  _has;
    bool  _isEventOrganizer;
    bool  _isUser;
    _INPBContact * _person;
    int  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsEventOrganizer;
@property (nonatomic) bool hasIsUser;
@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEventOrganizer;
@property (nonatomic) bool isUser;
@property (nonatomic, retain) _INPBContact *person;
@property (nonatomic) int status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsEventOrganizer;
- (bool)hasIsUser;
- (bool)hasPerson;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEventOrganizer;
- (bool)isUser;
- (id)person;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEventOrganizer:(bool)arg1;
- (void)setHasIsUser:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIsEventOrganizer:(bool)arg1;
- (void)setIsUser:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
