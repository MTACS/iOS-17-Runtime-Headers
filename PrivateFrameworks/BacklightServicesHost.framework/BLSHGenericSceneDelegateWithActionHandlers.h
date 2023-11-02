
@interface BLSHGenericSceneDelegateWithActionHandlers : NSObject <BLSSceneDelegateWithActionHandlers> {
    NSMutableArray * _actionHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addActionHandler:(id)arg1 forScene:(id)arg2;
- (id)init;
- (void)removeActionHandler:(id)arg1 forScene:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;

@end
