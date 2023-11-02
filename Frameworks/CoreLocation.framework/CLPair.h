
@interface CLPair : NSObject <NSCopying, NSSecureCoding> {
    int  _first;
    int  _second;
}

@property (nonatomic, readonly) int first;
@property (nonatomic, readonly) int second;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)first;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(int)arg1 second:(int)arg2;
- (int)second;

@end
