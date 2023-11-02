
@interface SUCoreRollback : NSObject <NSCopying, NSSecureCoding> {
    SUCorePersistedState * _persistedState;
    SUCoreRollbackDescriptor * _rollback;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly, retain) SUCoreRollbackDescriptor *eligibleRollback;
@property (nonatomic, retain) SUCoreRollbackDescriptor *rollback;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eligibleRollback;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadPersistedStateFile;
- (id)previousRollback;
- (id)rollback;
- (void)rollbackCompleted;
- (void)setRollback:(id)arg1;
- (id)summary;

@end
