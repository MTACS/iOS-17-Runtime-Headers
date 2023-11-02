
@interface SiriTTSTrainingAsset : NSObject <NSCopying, NSSecureCoding> {
    NSString * _factor;
    NSString * _path;
}

@property (nonatomic, readonly) long long diskSize;
@property (nonatomic, readonly, retain) NSNumber *diskSize;
@property (nonatomic, readonly, retain) NSString *factor;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly, retain) NSString *language;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *path;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)diskSize;
- (void)encodeWithCoder:(id)arg1;
- (id)factor;
- (long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFactor:(id)arg1 path:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)name;
- (id)path;

@end
