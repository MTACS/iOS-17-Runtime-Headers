
@interface NFPromise : NSObject {
    NFPromiseSeal * _seal;
}

@property (readonly) id /* block */ delay;
@property (readonly) id /* block */ delayOn;
@property (readonly) id /* block */ error;
@property (readonly) id /* block */ errorOn;
@property (readonly) id /* block */ pipe;
@property (readonly) id /* block */ pipeOn;
@property (readonly) id /* block */ resolve;
@property (readonly) id /* block */ resolveOn;
@property (nonatomic, retain) NFPromiseSeal *seal;
@property (readonly) id /* block */ then;
@property (readonly) id /* block */ thenOn;

+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3;
+ (id)asDelay:(double)arg1 withError:(id)arg2;
+ (id)asDelay:(double)arg1 withValue:(id)arg2;
+ (id)asVoid;
+ (id)asVoid:(id)arg1;
+ (id)firstly:(id /* block */)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)always:(id /* block */)arg1;
- (id)alwaysOn:(id)arg1 always:(id /* block */)arg2;
- (void)dealloc;
- (id /* block */)delay;
- (id /* block */)delayOn;
- (id /* block */)error;
- (id)error:(id /* block */)arg1;
- (id /* block */)errorOn;
- (id)errorOn:(id)arg1 error:(id /* block */)arg2;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithResolver:(id /* block */)arg1;
- (id)initWithValue:(id)arg1;
- (id /* block */)pipe;
- (id /* block */)pipeOn;
- (id /* block */)resolve;
- (id /* block */)resolveOn;
- (id)seal;
- (void)setSeal:(id)arg1;
- (id /* block */)then;
- (id)then:(id /* block */)arg1;
- (id /* block */)thenOn;
- (id)thenOn:(id)arg1 then:(id /* block */)arg2;
- (id)timeoutAfter:(double)arg1;
- (id)timeoutAfter:(double)arg1 on:(id)arg2;

@end
