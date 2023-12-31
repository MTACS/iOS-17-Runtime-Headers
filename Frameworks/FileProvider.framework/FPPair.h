
@interface FPPair : NSObject <NSCopying> {
    id  _first;
    id  _second;
}

@property (nonatomic, retain) id first;
@property (nonatomic, retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPair:(id)arg1;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;

@end
