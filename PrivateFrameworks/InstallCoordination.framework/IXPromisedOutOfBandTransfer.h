
@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic) double percentComplete;
@property (nonatomic, retain) IXPromisedOutOfBandTransferSeed *seed;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (id)initWithSeed:(id)arg1;
- (Class)seedClass;

@end
