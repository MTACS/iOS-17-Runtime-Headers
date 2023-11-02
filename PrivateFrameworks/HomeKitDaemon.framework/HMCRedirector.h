
@interface HMCRedirector : HMFObject <HMFLogging> {
    NSMapTable * _deleteClass;
    NSMapTable * _deleteModelID;
    NSMapTable * _insertClass;
    NSString * _label;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    HMCPartition * _partition;
    NSMapTable * _updateClass;
    NSMapTable * _updateModelID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)addTarget:(id)arg1 selector:(SEL)arg2 changeMask:(unsigned long long)arg3 forChangesOfObjectsWithModelType:(id)arg4 forChangesOfObjectsWithModelID:(id)arg5;
- (id)addTarget:(id)arg1 selector:(SEL)arg2 changeMask:(unsigned long long)arg3 forChangesOfObjectsWithModelType:(id)arg4 forChangesOfObjectsWithModelID:(id)arg5 error:(id*)arg6;
- (id)initWithLabel:(id)arg1 partition:(id)arg2;
- (id)label;
- (id)logIdentifier;
- (bool)processInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3;
- (void)removeRegistrationForChangeOfObjectsOfModelType:(id)arg1 forChangesOfObjectsWithModelID:(id)arg2;

@end
