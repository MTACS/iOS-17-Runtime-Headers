
@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {
    unsigned char * _matrix;
    unsigned long long  _sourceCount;
}

@property (nonatomic, readonly) unsigned long long sourceCount;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCount:(unsigned long long)arg1;
- (unsigned char)passRuleForElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2;
- (void)setPassRule:(unsigned char)arg1 forElement:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3;
- (unsigned long long)sourceCount;

@end
