
@interface SUCoreEventAugmenter : NSObject {
    SUCoreDescriptor * _alternateDescriptor;
    SUCorePolicy * _policy;
    SUCoreDescriptor * _primaryDescriptor;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) SUCoreDescriptor *alternateDescriptor;
@property (nonatomic, retain) SUCorePolicy *policy;
@property (nonatomic, retain) SUCoreDescriptor *primaryDescriptor;

+ (void)augmentEvent:(id)arg1 withDescriptor:(id)arg2;
+ (void)augmentEvent:(id)arg1 withDescriptor:(id)arg2 specifyAlternateUpdate:(bool)arg3;
+ (void)augmentEvent:(id)arg1 withPolicy:(id)arg2;
+ (void)augmentEvent:(id)arg1 withPolicy:(id)arg2 primaryDescriptor:(id)arg3 alternateDescriptor:(id)arg4;

- (void).cxx_destruct;
- (id)alternateDescriptor;
- (void)augmentEvent:(id)arg1;
- (id)init;
- (id)policy;
- (id)primaryDescriptor;
- (void)setAlternateDescriptor:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setPrimaryDescriptor:(id)arg1;

@end
