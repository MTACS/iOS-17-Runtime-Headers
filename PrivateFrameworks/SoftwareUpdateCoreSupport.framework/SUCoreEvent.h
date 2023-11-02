
@interface SUCoreEvent : NSObject {
    NSMutableDictionary * _allFields;
    bool  _changedSinceReported;
    NSString * _reportedUUID;
    NSURL * _serverURL;
}

@property (nonatomic, retain) NSMutableDictionary *allFields;
@property (nonatomic) bool changedSinceReported;
@property (nonatomic, retain) NSString *reportedUUID;
@property (nonatomic, retain) NSURL *serverURL;

- (void).cxx_destruct;
- (id)allFields;
- (bool)changedSinceReported;
- (id)getAugmentedEvent;
- (void)incrementErrorCount;
- (id)initWithEventDictionary:(id)arg1 extendingWith:(id)arg2 reportingToServer:(id)arg3;
- (bool)isEqualErrorEvent:(id)arg1;
- (bool)isSuccess;
- (id)reportedUUID;
- (id)serverURL;
- (void)setAllFields:(id)arg1;
- (void)setChangedSinceReported:(bool)arg1;
- (void)setReportedUUID:(id)arg1;
- (void)setServerURL:(id)arg1;

@end
