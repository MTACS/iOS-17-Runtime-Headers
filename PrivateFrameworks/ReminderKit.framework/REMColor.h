
@interface REMColor : NSObject <NSCopying, NSSecureCoding> {
    double  _alpha;
    double  _blue;
    NSString * _ckSymbolicColorName;
    unsigned long long  _colorRGBSpace;
    NSString * _daHexString;
    NSString * _daSymbolicColorName;
    double  _green;
    double  _red;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) NSString *ckSymbolicColorName;
@property (nonatomic, readonly) unsigned long long colorRGBSpace;
@property (nonatomic, readonly) NSString *daHexString;
@property (nonatomic, readonly) NSString *daSymbolicColorName;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double red;

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithDictionaryData:(id)arg1 error:(id*)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)redColor;
+ (bool)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;

- (void).cxx_destruct;
- (double)alpha;
- (id)archivedDictionaryDataWithError:(id*)arg1;
- (double)blue;
- (id)ckSymbolicColorName;
- (unsigned long long)colorRGBSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daHexString;
- (id)daSymbolicColorName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (unsigned long long)hash;
- (id)hexString;
- (id)hexStringWithAlpha;
- (id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3;
- (id)initWithHexString:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)red;

@end
