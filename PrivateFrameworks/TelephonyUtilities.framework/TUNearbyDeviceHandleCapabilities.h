
@interface TUNearbyDeviceHandleCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSString * _modelString;
    NSString * _sourceVersion;
}

@property (getter=isAVLessCapable, nonatomic, readonly) bool avLessCapable;
@property (getter=isLagunaCapable, nonatomic, readonly) bool lagunaCapable;
@property (nonatomic, readonly, copy) NSString *modelString;
@property (nonatomic, readonly, copy) NSString *sourceVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceVersion:(id)arg1;
- (id)initWithSourceVersion:(id)arg1 modelString:(id)arg2;
- (bool)isAVLessCapable;
- (bool)isLagunaCapable;
- (id)modelString;
- (id)sourceVersion;

@end
