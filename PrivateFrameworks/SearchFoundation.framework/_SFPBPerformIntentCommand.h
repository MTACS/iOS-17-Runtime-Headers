
@interface _SFPBPerformIntentCommand : PBCodable <NSSecureCoding, _SFPBPerformIntentCommand> {
    NSString * _applicationBundleIdentifier;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    bool  _isRunnableWorkflow;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic) bool isRunnableWorkflow;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (bool)isEqual:(id)arg1;
- (bool)isRunnableWorkflow;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIsRunnableWorkflow:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
