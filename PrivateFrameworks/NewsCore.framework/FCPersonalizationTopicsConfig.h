
@interface FCPersonalizationTopicsConfig : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _topicsConfig;
}

@property (nonatomic, retain) NSArray *topicsConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 defaultConfig:(id)arg2;
- (id)initWithTopicsConfig:(id)arg1;
- (void)setTopicsConfig:(id)arg1;
- (id)topicsConfig;

@end
