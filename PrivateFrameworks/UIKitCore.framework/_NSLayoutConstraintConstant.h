
@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {
    double  _numericValue;
    NSString * _symbolicValue;
}

@property (nonatomic, readonly) double numericValue;
@property (nonatomic, readonly, copy) NSString *symbolicValue;

+ (id)constantWithSymbolicValue:(id)arg1 numericValue:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolicValue:(id)arg1 numericValue:(double)arg2;
- (double)numericValue;
- (id)symbolicValue;

@end
