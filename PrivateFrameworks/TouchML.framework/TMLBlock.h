
@interface TMLBlock : NSObject <TMLBlockJSExports> {
    id  _block;
}

@property (nonatomic, readonly) id blockValue;

+ (id)blockWithFunction:(id)arg1;
+ (id)blockWithFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (void)callBlock:(id)arg1 arguments:(id)arg2;
+ (id)createBlockForJSFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (id)createBlockWithValueForJSFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (void)initializeJSContext:(id)arg1;

- (void).cxx_destruct;
- (id)blockValue;
- (void)dealloc;
- (id)initWithFunction:(id)arg1 argumentsEncoding:(id)arg2;
- (id)initWithFunctionWithValue:(id)arg1 argumentsEncoding:(id)arg2;

@end
