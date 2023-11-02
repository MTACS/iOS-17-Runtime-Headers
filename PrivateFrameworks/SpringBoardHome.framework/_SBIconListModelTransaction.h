
@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet * _addedNodeIdentifiers;
    NSMutableSet * _deletedNodeIdentifiers;
    NSString * _requestID;
}

@property (nonatomic, readonly, copy) NSString *requestID;

- (void).cxx_destruct;
- (void)addNodeIdentifiers:(id)arg1;
- (void)commitChangesToObservers:(id)arg1 forNode:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithRequestID:(id)arg1;
- (void)removeNodeIdentifiers:(id)arg1;
- (id)requestID;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
