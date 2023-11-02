
@interface WFWorkflowQuery : WFResultQuery <NSSecureCoding> {
    NSString * _folderIdentifier;
    bool  _includeTombstonesAndConflicts;
    unsigned long long  _location;
    long long  _resultsLimit;
    NSString * _workflowType;
}

@property (nonatomic, readonly) NSString *folderIdentifier;
@property (nonatomic) bool includeTombstonesAndConflicts;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic) long long resultsLimit;
@property (nonatomic, readonly) NSString *workflowType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)folderIdentifier;
- (bool)includeTombstonesAndConflicts;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1;
- (id)initWithFolderIdentifier:(id)arg1;
- (id)initWithLocation:(unsigned long long)arg1;
- (id)initWithWorkflowType:(id)arg1;
- (unsigned long long)location;
- (long long)resultsLimit;
- (void)setIncludeTombstonesAndConflicts:(bool)arg1;
- (void)setResultsLimit:(long long)arg1;
- (id)workflowType;

@end
