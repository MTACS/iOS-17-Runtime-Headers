
@interface CatacombStateCache : NSObject {
    NSMutableDictionary * _cachedStates;
}

- (void).cxx_destruct;
- (int)addGroupStatesFromBuffer:(id)arg1;
- (int)addUserStatesFromBuffer:(id)arg1;
- (id)cachedComponents;
- (id)cachedGroupComponentsForUser:(unsigned int)arg1;
- (id)cachedUserComponents;
- (id)init;
- (void)removeUser:(unsigned int)arg1;
- (void)reset;
- (unsigned int)stateOfComponent:(id)arg1;
- (unsigned int)stateOfMasterComponent;
- (unsigned int)stateOfUserComponent:(unsigned int)arg1;

@end
