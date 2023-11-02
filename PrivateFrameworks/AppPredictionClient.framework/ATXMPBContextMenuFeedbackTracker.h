
@interface ATXMPBContextMenuFeedbackTracker : PBCodable <NSCopying> {
    NSString * _clientModelId;
    NSString * _consumerSubType;
    NSString * _executableType;
    struct { 
        unsigned int menuActionType : 1; 
    }  _has;
    int  _menuActionType;
    NSString * _suggestion;
}

@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, retain) NSString *executableType;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasExecutableType;
@property (nonatomic) bool hasMenuActionType;
@property (nonatomic, readonly) bool hasSuggestion;
@property (nonatomic) int menuActionType;
@property (nonatomic, retain) NSString *suggestion;

- (void).cxx_destruct;
- (int)StringAsMenuActionType:(id)arg1;
- (id)clientModelId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableType;
- (bool)hasClientModelId;
- (bool)hasConsumerSubType;
- (bool)hasExecutableType;
- (bool)hasMenuActionType;
- (bool)hasSuggestion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)menuActionType;
- (id)menuActionTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setExecutableType:(id)arg1;
- (void)setHasMenuActionType:(bool)arg1;
- (void)setMenuActionType:(int)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;
- (void)writeTo:(id)arg1;

@end
