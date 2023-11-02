
@interface REArrayDiff : NSObject {
    NSArray * _allOperations;
}

@property (nonatomic, readonly) NSArray *allOperations;

+ (id)_createSetFromElementArray:(id)arg1 equalComparator:(id /* block */)arg2 hashGenerator:(id /* block */)arg3;
+ (id)_indexSetFromSet:(id)arg1;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(id /* block */)arg3 hashGenerator:(id /* block */)arg4 changeComparator:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)allOperations;
- (void)enumerateOperationsUsingBlock:(id /* block */)arg1;

@end
