
@interface REDuetContextQuery : NSObject {
    NSSet * _devices;
    id /* block */  _evalBlock;
    NSString * _name;
    _CDContextualPredicate * _predicate;
    _CDMDCSContextualPredicate * _remotePredicate;
    NSArray * _searchKeyPaths;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSSet *devices;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _CDContextualPredicate *predicate;
@property (nonatomic, readonly) NSString *registrationID;
@property (nonatomic, readonly) _CDMDCSContextualPredicate *remotePredicate;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)_keyPathsForDevice:(id)arg1;
- (id)_localKeyPaths;
- (id)_localRegistrationWithCallback:(id /* block */)arg1;
- (id)_remoteRegistrationForDevice:(id)arg1 callback:(id /* block */)arg2;
- (id)_sortedKeyPaths:(id)arg1;
- (id)createRegistrationsWithCallback:(id /* block */)arg1;
- (id)devices;
- (id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(id /* block */)arg4;
- (id)keyPaths;
- (id)name;
- (id)predicate;
- (id)registrationID;
- (id)remotePredicate;
- (void)setDevices:(id)arg1;
- (id)uuid;
- (id)valueFromUserContext:(id)arg1;

@end
