
@interface CNResult : NSObject {
    CNEither * _either;
}

@property (readonly) CNEither *either;
@property (readonly, copy) NSError *error;
@property (readonly) bool isFailure;
@property (readonly) bool isSuccess;
@property (readonly) id value;

+ (id)failureWithError:(id)arg1;
+ (id /* block */)isFailure;
+ (id /* block */)isSuccess;
+ (id)resultWithBlock:(id /* block */)arg1;
+ (id)resultWithFuture:(id)arg1;
+ (id)resultWithFuture:(id)arg1 timeout:(double)arg2;
+ (id)resultWithValue:(id)arg1 orError:(id)arg2;
+ (id)successWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)either;
- (id)error;
- (id)flatMap:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFailure;
- (bool)isSuccess;
- (id)recover:(id /* block */)arg1;
- (id)value;
- (id)valueWithError:(id*)arg1;

@end
