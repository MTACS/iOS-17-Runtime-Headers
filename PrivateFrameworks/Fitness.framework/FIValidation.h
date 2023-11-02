
@interface FIValidation : NSObject {
    NSString * _name;
    id /* block */  _test;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id /* block */ test;

+ (bool)performValidations:(id)arg1 withObject:(id)arg2 error:(id*)arg3;
+ (id)validationWithName:(id)arg1 test:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)name;
- (id /* block */)test;
- (bool)validateObject:(id)arg1 withError:(id*)arg2;

@end
