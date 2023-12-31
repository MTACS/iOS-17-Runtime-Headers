
@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic, retain) IXPromisedInMemoryDictionarySeed *seed;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 dictionary:(id)arg3;
- (id)initWithSeed:(id)arg1;
- (void)resetWithCompletion:(id /* block */)arg1;
- (Class)seedClass;

@end
