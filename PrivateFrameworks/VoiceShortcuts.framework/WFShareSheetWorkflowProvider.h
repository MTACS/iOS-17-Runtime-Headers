
@interface WFShareSheetWorkflowProvider : NSObject {
    <WFDatabaseProvider> * _databaseProvider;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;

- (void).cxx_destruct;
- (id)databaseProvider;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id*)arg3;

@end
