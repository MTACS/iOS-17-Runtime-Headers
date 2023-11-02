
@interface SBIconStateUnarchiveResult : NSObject <BSDescriptionProviding, SBIconStateUnarchiveContext> {
    bool  _corrupted;
    bool  _dirty;
    NSMutableArray * _folderStack;
    NSDictionary * _metadata;
    NSMutableSet * _nodeIdentifiersUnarchived;
    long long  _parseDepth;
    SBRootFolder * _rootFolder;
    NSMutableSet * _widgetUniqueIdentifiersUnarchived;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (readonly) unsigned long long hash;
@property (setter=_setMetadata:, nonatomic, copy) NSDictionary *metadata;
@property (setter=_setRootFolder:, nonatomic, retain) SBRootFolder *rootFolder;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_currentFolder;
- (long long)_currentParseDepth;
- (bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (bool)_isWidgetUniqueIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (void)_noteWidgetUniqueIdentifierWasUnarchived:(id)arg1;
- (id)_popFolder;
- (void)_pushFolder:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setRootFolder:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isDirty;
- (bool)isValid;
- (id)metadata;
- (id)rootFolder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
