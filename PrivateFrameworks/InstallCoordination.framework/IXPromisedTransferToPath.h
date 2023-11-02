
@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic) double percentComplete;
@property (nonatomic, retain) IXPromisedTransferToPathSeed *seed;
@property (nonatomic) bool shouldCopy;
@property (nonatomic, retain) NSURL *transferPath;
@property (nonatomic) bool tryDeltaCopy;

+ (bool)supportsSecureCoding;

- (bool)_doInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4;
- (id)initWithSeed:(id)arg1;
- (Class)seedClass;
- (void)setComplete:(bool)arg1;
- (void)setShouldCopy:(bool)arg1;
- (void)setTransferPath:(id)arg1;
- (void)setTryDeltaCopy:(bool)arg1;
- (bool)shouldCopy;
- (id)transferPath;
- (bool)tryDeltaCopy;

@end