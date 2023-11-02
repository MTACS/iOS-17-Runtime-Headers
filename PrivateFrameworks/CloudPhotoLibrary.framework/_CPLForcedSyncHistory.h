
@interface _CPLForcedSyncHistory : NSObject {
    NSDate * _creationDate;
    bool  _discarded;
    NSString * _errorDescription;
    CPLScopeFilter * _filter;
    Class  _taskClass;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool discarded;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) CPLScopeFilter *filter;
@property (nonatomic, readonly) Class taskClass;

- (void).cxx_destruct;
- (id)creationDate;
- (id)descriptionWithNow:(id)arg1;
- (bool)discarded;
- (id)errorDescription;
- (id)filter;
- (id)initWithForcedSyncTask:(id)arg1 discarded:(bool)arg2 error:(id)arg3;
- (Class)taskClass;

@end
