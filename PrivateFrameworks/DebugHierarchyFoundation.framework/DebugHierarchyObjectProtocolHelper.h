
@interface DebugHierarchyObjectProtocolHelper : NSObject

+ (id)childObjectsForObject:(id)arg1 withType:(id)arg2 outGroupingID:(id*)arg3 outOptions:(id*)arg4;
+ (bool)classImplementsRequiredAdditionalGroupMethods:(Class)arg1;
+ (bool)classImplementsRequiredChildGroupMethods:(Class)arg1;
+ (bool)classImplements_debugHierarchyValueForPropertyWithName:(Class)arg1;
+ (bool)classOverrides_debugHierarchyPropertyDescriptions:(Class)arg1;
+ (id)debugHierarchyAdditionalGroupingIDsOfClass:(Class)arg1;
+ (id)debugHierarchyChildGroupingIDOfClass:(Class)arg1;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2 vendingClass:(Class)arg3 onObject:(id)arg4;
+ (id)debugHierarchyPropertyDescriptionsOfClass:(Class)arg1;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 vendingClass:(Class)arg3 outOptions:(id*)arg4 outError:(id*)arg5;
+ (long long)debugHierarchyVisibilityOfObject:(id)arg1;
+ (void)enumerateAdditionalGroupsAndObjectsOfObject:(id)arg1 withType:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)objectImplements_debugHierarchyVisibility:(id)arg1;
+ (void)updateDebugHierarchyValueForPropertyWithDescription:(id)arg1 onObject:(id)arg2;
+ (bool)v1_objectImplementsRequiredAdditionalGroupMethods:(id)arg1;
+ (bool)v1_objectImplementsRequiredChildGroupMethods:(id)arg1;

@end
