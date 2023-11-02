
@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _actions;
    NSString * _localizedMessage;
    NSString * _localizedTitle;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, readonly) bool hasLocalizedMessage;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, retain) NSString *localizedMessage;
@property (nonatomic, retain) NSString *localizedTitle;

+ (Class)actionsType;

- (void).cxx_destruct;
- (id)actions;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedMessage;
- (bool)hasLocalizedTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedMessage;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
