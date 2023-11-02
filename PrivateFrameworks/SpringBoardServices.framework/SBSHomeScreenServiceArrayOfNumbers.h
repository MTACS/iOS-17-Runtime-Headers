
@interface SBSHomeScreenServiceArrayOfNumbers : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _array;
}

@property (nonatomic, readonly, copy) NSArray *array;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)array;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
