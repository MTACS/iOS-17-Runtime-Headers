
@interface ABPKSkeletonDefinition : NSObject {
    NSArray * _jointNames;
    NSDictionary * _jointNamesToIndices;
    struct vector<long, std::allocator<long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::allocator<long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _jointParentIndicesVector;
    NSArray * _parentChildOrder;
    struct map<long, std::vector<long>, std::less<long>, std::allocator<std::pair<const long, std::vector<long>>>> { 
        struct __tree<std::__value_type<long, std::vector<long>>, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>>, std::allocator<std::__value_type<long, std::vector<long>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, std::vector<long>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _parentsToChildIndicesMap;
    long long  _rootJointIndex;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) NSArray *parentChildOrder;
@property (nonatomic, readonly) long long rootJointIndex;

+ (id)computeParentChildOrderFor:(const void*)arg1 withRoot:(long long)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateChildrenJointIndicesOfJointAtIndex:(long long)arg1 withBlock:(id /* block */)arg2;
- (id)getChildrenIndices:(long long)arg1;
- (long long)indexOfJointWithName:(id)arg1;
- (id)init;
- (id)initWithPlist:(id)arg1 fromBundle:(id)arg2;
- (id)initWithType:(long long)arg1;
- (unsigned long long)jointCount;
- (id)jointName:(long long)arg1;
- (id)parentChildOrder;
- (long long)parentJoint:(long long)arg1;
- (long long)rootJointIndex;

@end
