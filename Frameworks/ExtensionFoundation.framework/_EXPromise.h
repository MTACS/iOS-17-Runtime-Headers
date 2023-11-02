
@interface _EXPromise : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    id /* block */  _promiseBlock;
}

@property (readonly) NSUUID *identifier;
@property (readonly, copy) id /* block */ promiseBlock;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPromiseBlock:(id /* block */)arg1;
- (id /* block */)promiseBlock;
- (void)resolveObjectOfClass:(Class)arg1 completion:(id /* block */)arg2;
- (id)resolveObjectOfClass:(Class)arg1 error:(id*)arg2;
- (void)resolveObjectOfClasses:(id)arg1 completion:(id /* block */)arg2;
- (id)resolveObjectOfClasses:(id)arg1 error:(id*)arg2;

@end
