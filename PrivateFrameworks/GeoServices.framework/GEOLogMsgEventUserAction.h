
@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {
    NSString * _actionRichProviderId;
    int  _buttonType;
    struct { 
        unsigned int has_buttonType : 1; 
        unsigned int has_userActionEventAction : 1; 
        unsigned int has_userActionEventTarget : 1; 
        unsigned int read_actionRichProviderId : 1; 
        unsigned int read_moduleInfo : 1; 
        unsigned int read_userActionEventKey : 1; 
        unsigned int read_userActionEventValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLogMsgEventUserActionModuleInfo * _moduleInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _userActionEventAction;
    NSString * _userActionEventKey;
    int  _userActionEventTarget;
    NSString * _userActionEventValue;
}

@property (nonatomic, retain) NSString *actionRichProviderId;
@property (nonatomic) int buttonType;
@property (nonatomic, readonly) bool hasActionRichProviderId;
@property (nonatomic) bool hasButtonType;
@property (nonatomic, readonly) bool hasModuleInfo;
@property (nonatomic) bool hasUserActionEventAction;
@property (nonatomic, readonly) bool hasUserActionEventKey;
@property (nonatomic) bool hasUserActionEventTarget;
@property (nonatomic, readonly) bool hasUserActionEventValue;
@property (nonatomic, retain) GEOLogMsgEventUserActionModuleInfo *moduleInfo;
@property (nonatomic) int userActionEventAction;
@property (nonatomic, retain) NSString *userActionEventKey;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic, retain) NSString *userActionEventValue;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsButtonType:(id)arg1;
- (int)StringAsUserActionEventAction:(id)arg1;
- (int)StringAsUserActionEventTarget:(id)arg1;
- (id)actionRichProviderId;
- (int)buttonType;
- (id)buttonTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionRichProviderId;
- (bool)hasButtonType;
- (bool)hasModuleInfo;
- (bool)hasUserActionEventAction;
- (bool)hasUserActionEventKey;
- (bool)hasUserActionEventTarget;
- (bool)hasUserActionEventValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)moduleInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionRichProviderId:(id)arg1;
- (void)setButtonType:(int)arg1;
- (void)setHasButtonType:(bool)arg1;
- (void)setHasUserActionEventAction:(bool)arg1;
- (void)setHasUserActionEventTarget:(bool)arg1;
- (void)setModuleInfo:(id)arg1;
- (void)setUserActionEventAction:(int)arg1;
- (void)setUserActionEventKey:(id)arg1;
- (void)setUserActionEventTarget:(int)arg1;
- (void)setUserActionEventValue:(id)arg1;
- (int)userActionEventAction;
- (id)userActionEventActionAsString:(int)arg1;
- (id)userActionEventKey;
- (int)userActionEventTarget;
- (id)userActionEventTargetAsString:(int)arg1;
- (id)userActionEventValue;
- (void)writeTo:(id)arg1;

@end
