
@interface SAHASceneAction : SADomainObject

@property (nonatomic, retain) SAHAAction *action;
@property (nonatomic, copy) NSURL *entityId;

+ (id)sceneAction;
+ (id)sceneActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)encodedClassName;
- (id)entityId;
- (id)groupIdentifier;
- (void)setAction:(id)arg1;
- (void)setEntityId:(id)arg1;

@end
