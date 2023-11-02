
@interface AXSSMotionTrackingInput : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) bool isCamera;
@property (nonatomic, readonly) bool isHIDDevice;
@property (nonatomic, readonly) bool isVideoFile;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *plistDictionary;
@property (nonatomic, readonly) bool supportsExpressions;
@property (nonatomic, readonly) bool supportsLookAtPoint;
@property (nonatomic, readonly) unsigned long long trackingType;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)motionTrackingInputFromPlistDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isCamera;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMotionTrackingInput:(id)arg1;
- (bool)isHIDDevice;
- (bool)isVideoFile;
- (id)plistDictionary;
- (bool)supportsExpressions;
- (bool)supportsLookAtPoint;
- (unsigned long long)trackingType;

@end
