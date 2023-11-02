
@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowSeparateInputForExpressions;
    NSSet * _allowedTrackingTypes;
    NSArray * _orderedInputPreference;
}

@property (nonatomic) bool allowSeparateInputForExpressions;
@property (nonatomic, copy) NSSet *allowedTrackingTypes;
@property (nonatomic, readonly, copy) NSArray *orderedCameraInputPreference;
@property (nonatomic, copy) NSArray *orderedInputPreference;
@property (nonatomic, readonly, copy) NSDictionary *plistDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowSeparateInputForExpressions;
- (id)allowedTrackingTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderedInputPreference:(id)arg1 allowedTrackingTypes:(id)arg2 allowSeparateInputForExpressions:(bool)arg3;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMotionTrackingInputConfiguration:(id)arg1;
- (id)orderedCameraInputPreference;
- (id)orderedInputPreference;
- (id)plistDictionary;
- (void)setAllowSeparateInputForExpressions:(bool)arg1;
- (void)setAllowedTrackingTypes:(id)arg1;
- (void)setOrderedInputPreference:(id)arg1;
- (bool)supportsTrackingType:(unsigned long long)arg1;

@end
