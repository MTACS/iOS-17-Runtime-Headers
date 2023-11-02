
@interface PXGGradient : NSObject <NSCopying> {
    long long  _direction;
    UIColor * _endingColor;
    UIColor * _startingColor;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly, copy) UIColor *endingColor;
@property (nonatomic, readonly, copy) UIColor *startingColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)direction;
- (id)endingColor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 direction:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)startingColor;

@end
