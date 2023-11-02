
@interface DebugHierarchyObjectInterface : NSObject

+ (id)propertyDescriptionsForClass:(Class)arg1 inContext:(id)arg2;
+ (id)valueAndOptionsForProperty:(id)arg1 onObject:(id)arg2 inContext:(id)arg3;
+ (id)valueForProperty:(id)arg1 withOutOptions:(id*)arg2 onObject:(id)arg3 inContext:(id)arg4 error:(id*)arg5;

@end
