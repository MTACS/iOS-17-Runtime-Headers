
@interface WFCoercionHandler : NSObject {
    id /* block */  _asynchronousBlock;
    id /* block */  _availabilityCheck;
    id /* block */  _block;
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) id /* block */ asynchronousBlock;
@property (nonatomic, readonly, copy) id /* block */ availabilityCheck;
@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) long long concurrencyMode;
@property (nonatomic, readonly, copy) NSString *keyPath;

+ (id)asynchronousBlock:(id /* block */)arg1;
+ (id)asynchronousBlock:(id /* block */)arg1 availabilityCheck:(id /* block */)arg2;
+ (id)block:(id /* block */)arg1;
+ (id)block:(id /* block */)arg1 availabilityCheck:(id /* block */)arg2;
+ (id)keyPath:(id)arg1;
+ (id)keyPath:(id)arg1 availabilityCheck:(id /* block */)arg2;
+ (id)keyPath:(id)arg1 unavailableIfNilOrEmpty:(bool)arg2;

- (void).cxx_destruct;
- (id /* block */)asynchronousBlock;
- (id /* block */)availabilityCheck;
- (id /* block */)block;
- (bool)coercionIsAvailableForItem:(id)arg1;
- (long long)concurrencyMode;
- (bool)hasAvailabilityCheck;
- (id)initWithBlock:(id /* block */)arg1 asynchronousBlock:(id /* block */)arg2 keyPath:(id)arg3 availabilityCheck:(id /* block */)arg4;
- (id)keyPath;
- (void)performAsynchronousCoercionWithContentItem:(id)arg1 forType:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)performSynchronousCoercionWithContentItem:(id)arg1 forType:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
