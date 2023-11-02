
@interface IMPair : NSObject <NSCopying> {
    id  _first;
    id  _second;
}

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;

@end
