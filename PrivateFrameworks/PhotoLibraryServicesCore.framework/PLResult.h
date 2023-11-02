
@interface PLResult : NSObject

@property (readonly, copy) NSError *error;
@property (readonly) bool isFailure;
@property (readonly) bool isSuccess;
@property (readonly) id result;

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;

- (id)description;
- (id)error;
- (id)initForSubclasses;
- (bool)isFailure;
- (bool)isSuccess;
- (id)result;
- (id)resultWithError:(id*)arg1;

@end
