
@interface WFSerializedSmartPromptPerWorkflowState : NSObject {
    NSString * _actionUUID;
    NSData * _data;
}

@property (nonatomic, readonly) NSString *actionUUID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)data;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1 actionUUID:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
