
@interface WFDatabaseAccessResourceState : NSObject {
    NSData * _perWorkflowStateData;
    NSString * _persistentIdentifier;
}

@property (nonatomic, readonly) NSData *perWorkflowStateData;
@property (nonatomic, readonly) NSString *persistentIdentifier;

- (void).cxx_destruct;
- (id)initWithPersistentIdentifier:(id)arg1 perWorkflowStateData:(id)arg2;
- (id)perWorkflowStateData;
- (id)persistentIdentifier;

@end
