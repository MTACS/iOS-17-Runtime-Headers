
@interface STSizeVector : NSObject <NSSecureCoding> {
    long long  _docsAndData;
    long long  _fixed;
    long long  _purgeable;
}

@property (readonly) long long docsAndData;
@property (readonly) long long dynamic;
@property (readonly) long long fixed;
@property (readonly) bool isZero;
@property (readonly) long long purgeable;
@property (readonly) long long userTotal;

+ (id)docsAndData:(long long)arg1;
+ (id)docsAndData:(long long)arg1 purgeable:(long long)arg2;
+ (id)dynamic:(long long)arg1 purgeable:(long long)arg2;
+ (id)fixed:(long long)arg1;
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2;
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;
+ (id)fixed:(long long)arg1 dynamic:(long long)arg2 purgeable:(long long)arg3;
+ (id)fixed:(long long)arg1 purgeable:(long long)arg2;
+ (id)purgeable:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)zero;

- (long long)docsAndData;
- (long long)dynamic;
- (void)encodeWithCoder:(id)arg1;
- (long long)fixed;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSizeVector:(id)arg1;
- (bool)isZero;
- (id)plus:(id)arg1;
- (long long)purgeable;
- (long long)userTotal;

@end
