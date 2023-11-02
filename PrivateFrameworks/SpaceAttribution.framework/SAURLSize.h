
@interface SAURLSize : NSObject <NSSecureCoding> {
    bool  _mayBePartOfCloneChain;
    unsigned long long  _size;
}

@property bool mayBePartOfCloneChain;
@property unsigned long long size;

+ (id)newWithSize:(unsigned long long)arg1;
+ (id)newWithSize:(unsigned long long)arg1 mayBePartOfCloneChain:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1 mayBePartOfCloneChain:(bool)arg2;
- (bool)mayBePartOfCloneChain;
- (void)setMayBePartOfCloneChain:(bool)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
