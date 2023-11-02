
@interface MASeries : NSObject {
    MAIndexCache * _indexCache;
    NSString * _name;
    MAFloatVector * _vector;
}

@property (nonatomic, readonly) MAIndexCache *indexCache;
@property (nonatomic, readonly, copy) NSArray *labels;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) MAFloatVector *vector;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)indexCache;
- (id)initWithName:(id)arg1 indexCache:(id)arg2 vector:(id)arg3;
- (id)initWithName:(id)arg1 labels:(id)arg2 vector:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)name;
- (float)valueAtIndex:(long long)arg1;
- (id)valueByLabels;
- (id)valueForLabel:(id)arg1;
- (id)vector;

@end
