
@interface ActivityUIServices.SizeDimensionRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void maximum;
    void minimum;
    void type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2 type:(long long)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximum;
- (double)minimum;
- (long long)type;

@end
