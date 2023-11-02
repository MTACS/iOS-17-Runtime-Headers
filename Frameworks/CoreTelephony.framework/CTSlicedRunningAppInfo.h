
@interface CTSlicedRunningAppInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSNumber * _foreground;
    NSArray * _interfaces;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSNumber *foreground;
@property (nonatomic, retain) NSArray *interfaces;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)foreground;
- (id)initWithCoder:(id)arg1;
- (id)interfaces;
- (void)setBundleId:(id)arg1;
- (void)setForeground:(id)arg1;
- (void)setInterfaces:(id)arg1;

@end
