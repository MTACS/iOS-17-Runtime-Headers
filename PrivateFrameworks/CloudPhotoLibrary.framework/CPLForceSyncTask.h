
@interface CPLForceSyncTask : NSObject {
    bool  _cancelled;
    NSArray * _scopeIdentifiers;
    NSString * _taskIdentifier;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly, copy) NSArray *scopeIdentifiers;
@property (nonatomic, copy) NSString *taskIdentifier;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)description;
- (id)initWithScopeIdentifiers:(id)arg1;
- (bool)isCancelled;
- (void)launchTask;
- (id)scopeIdentifiers;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
