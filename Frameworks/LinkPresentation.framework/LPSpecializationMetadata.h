
@interface LPSpecializationMetadata : NSObject <NSCopying, NSSecureCoding> {
    bool  __canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
    bool  __disallowsURLOverrideByDelegate;
    bool  __dummyPropertyForObservation;
}

@property (nonatomic, readonly) bool _canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
@property (nonatomic, readonly) bool _disallowsURLOverrideByDelegate;
@property (nonatomic, readonly) bool _dummyPropertyForObservation;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (bool)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
- (bool)_disallowsURLOverrideByDelegate;
- (bool)_dummyPropertyForObservation;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
