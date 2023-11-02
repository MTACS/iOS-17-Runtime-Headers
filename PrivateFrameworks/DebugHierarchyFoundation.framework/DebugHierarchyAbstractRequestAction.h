
@interface DebugHierarchyAbstractRequestAction : NSObject <DebugHierarchyRequestAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)actionWithDictionary:(id)arg1;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)keysToArchiveViaKVC;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
