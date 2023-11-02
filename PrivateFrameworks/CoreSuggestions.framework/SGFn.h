
@interface SGFn : NSObject

+ (id)filter:(id)arg1 f:(id /* block */)arg2;
+ (id)map:(id)arg1 f:(id /* block */)arg2;
+ (id)mapAndFilter:(id)arg1 f:(id /* block */)arg2;
+ (id)simpleDedupe:(id)arg1;

@end
