
@interface COAlarmReadRequest : COMeshRequest {
    NSUUID * _accessoryUniqueIdentifier;
    bool  _isForMerge;
    bool  _requiresFilter;
}

@property (nonatomic, readonly) NSUUID *accessoryUniqueIdentifier;
@property (nonatomic, readonly) bool isForMerge;
@property (nonatomic, readonly) bool requiresFilter;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryUniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initForMerge;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessoryUniqueIdentifier:(id)arg1;
- (id)initWithAccessoryUniqueIdentifier:(id)arg1 requiresFilter:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isForMerge;
- (bool)requiresFilter;

@end
