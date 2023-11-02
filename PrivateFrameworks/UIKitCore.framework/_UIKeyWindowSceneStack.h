
@interface _UIKeyWindowSceneStack : NSObject <BSDebugDescriptionProviding> {
    UIWindowScene * _keyWindowSceneInStack;
    NSString * _name;
    NSMutableOrderedSet * _orderedRecords;
    NSMapTable * _recordsByWindowScene;
    struct { 
        unsigned int affectsApplicationKeyWindow : 1; 
        unsigned int hasViewServiceEntitlement : 1; 
    }  _sceneStackFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
