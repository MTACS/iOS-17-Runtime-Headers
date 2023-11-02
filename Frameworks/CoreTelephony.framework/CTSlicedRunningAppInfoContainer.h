
@interface CTSlicedRunningAppInfoContainer : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _appsInfo;
}

@property (nonatomic, retain) NSArray *appsInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appsInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppsInfo:(id)arg1;

@end
