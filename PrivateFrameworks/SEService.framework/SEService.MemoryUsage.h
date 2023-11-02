
@interface SEService.MemoryUsage : NSObject <NSSecureCoding> {
    void cod;
    void cor;
    void pHeap;
}

@property (nonatomic) long long cod;
@property (nonatomic) long long cor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long pHeap;

+ (id)empty;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cod;
- (long long)cor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPHeap:(long long)arg1 cor:(long long)arg2 cod:(long long)arg3;
- (long long)pHeap;
- (void)setCod:(long long)arg1;
- (void)setCor:(long long)arg1;
- (void)setPHeap:(long long)arg1;

@end
