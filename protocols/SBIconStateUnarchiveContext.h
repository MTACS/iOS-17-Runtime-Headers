
@protocol SBIconStateUnarchiveContext <NSObject>

@required

- (SBFolder *)_currentFolder;
- (long long)_currentParseDepth;
- (bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (bool)_isWidgetUniqueIdentifierAlreadyUnarchived:(NSString *)arg1;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (void)_noteWidgetUniqueIdentifierWasUnarchived:(NSString *)arg1;
- (SBFolder *)_popFolder;
- (void)_pushFolder:(SBFolder *)arg1;

@end
