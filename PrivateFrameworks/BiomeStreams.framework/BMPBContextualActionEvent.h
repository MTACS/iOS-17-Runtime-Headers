
@interface BMPBContextualActionEvent : PBCodable <NSCopying> {
    NSString * _actionName;
    NSString * _appName;
    NSMutableArray * _contents;
    NSString * _identifier;
    NSMutableArray * _parameters;
}

@property (nonatomic, retain) NSString *actionName;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSMutableArray *contents;
@property (nonatomic, readonly) bool hasActionName;
@property (nonatomic, readonly) bool hasAppName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *parameters;

+ (Class)contentType;
+ (Class)parameterType;

- (void).cxx_destruct;
- (id)actionName;
- (void)addContent:(id)arg1;
- (void)addParameter:(id)arg1;
- (id)appName;
- (void)clearContents;
- (void)clearParameters;
- (id)contentAtIndex:(unsigned long long)arg1;
- (id)contents;
- (unsigned long long)contentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionName;
- (bool)hasAppName;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameterAtIndex:(unsigned long long)arg1;
- (id)parameters;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
