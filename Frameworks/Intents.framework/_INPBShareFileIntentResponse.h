
@interface _INPBShareFileIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBShareFileIntentResponse> {
    bool  _confirm;
    struct { 
        unsigned int confirm : 1; 
        unsigned int shareMode : 1; 
        unsigned int success : 1; 
    }  _has;
    NSArray * _recipients;
    int  _shareMode;
    bool  _success;
}

@property (nonatomic) bool confirm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasShareMode;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (Class)recipientsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsShareMode:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
- (bool)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirm;
- (bool)hasShareMode;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (void)setSuccess:(bool)arg1;
- (int)shareMode;
- (id)shareModeAsString:(int)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
