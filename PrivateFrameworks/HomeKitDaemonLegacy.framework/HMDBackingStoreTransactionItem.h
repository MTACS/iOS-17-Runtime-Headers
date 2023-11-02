
@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject> {
    HMDBackingStoreModelObject * _change;
    NSSet * _dependentUUIDs;
    HMFMessage * _message;
}

@property (nonatomic, readonly) HMDBackingStoreModelObject *change;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HMFMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)change;
- (id)debugDescription;
- (id)dependentUUIDs;
- (id)description;
- (id)initWithChange:(id)arg1 message:(id)arg2;
- (id)message;

@end
