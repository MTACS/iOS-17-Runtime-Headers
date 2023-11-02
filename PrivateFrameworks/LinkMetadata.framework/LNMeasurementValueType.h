
@interface LNMeasurementValueType : LNValueType {
    long long  _unitType;
}

@property (nonatomic, readonly) long long unitType;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)accelerationValueType;
+ (id)angleValueType;
+ (id)areaValueType;
+ (id)concentrationMassValueType;
+ (id)dispersionValueType;
+ (id)durationValueType;
+ (id)electricChargeValueType;
+ (id)electricCurrentValueType;
+ (id)electricPotentialDifferenceValueType;
+ (id)electricResistanceValueType;
+ (id)energyValueType;
+ (id)frequencyValueType;
+ (id)fuelEfficiencyValueType;
+ (id)illuminanceValueType;
+ (id)informationStorageValueType;
+ (id)lengthValueType;
+ (id)massValueType;
+ (id)objectClassesForCoding;
+ (id)powerValueType;
+ (id)pressureValueType;
+ (id)speedValueType;
+ (bool)supportsSecureCoding;
+ (id)temperatureValueType;
+ (id)unsupportedMeasurementValueType;
+ (id)volumeValueType;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnitType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)typeIdentifierAsString;
- (long long)unitType;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)cat_dialogType;
- (id)cat_keyPath;
- (id)cat_value:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;

@end
