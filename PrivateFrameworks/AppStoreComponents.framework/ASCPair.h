
@interface ASCPair : NSObject <NSCopying> {
    id  _first;
    id  _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;

@end
