
@interface CTTransportSTK : NSObject <NSCopying, NSSecureCoding> {
    int  _index;
    NSData * _key_epki;
    NSData * _stk;
}

@property (nonatomic) int index;
@property (nonatomic, retain) NSData *key_epki;
@property (nonatomic, retain) NSData *stk;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithSTK:(id)arg1 forIdx:(int)arg2;
- (id)initWithSTK:(id)arg1 forIdx:(int)arg2 epki:(id)arg3;
- (id)key_epki;
- (void)setIndex:(int)arg1;
- (void)setKey_epki:(id)arg1;
- (void)setStk:(id)arg1;
- (id)stk;

@end
