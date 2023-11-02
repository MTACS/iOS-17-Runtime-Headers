
@interface _UIActivitySortItem : NSObject {
    UIActivity * _activity;
    long long  _group;
    id  _secondarySortValue;
    id  _tertiarySortValue;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, readonly) long long group;
@property (nonatomic, readonly) id secondarySortValue;
@property (nonatomic, readonly) id tertiarySortValue;

+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3;
+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4;

- (void).cxx_destruct;
- (id)activity;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (long long)group;
- (id)secondarySortValue;
- (id)tertiarySortValue;

@end
