
@interface DNDAccountFeatureSupport : NSObject <NSSecureCoding> {
    unsigned long long  _cloudFeatures;
    bool  _hasCloudDevices;
    bool  _hasPairedDevices;
    unsigned long long  _pairedFeatures;
}

@property (nonatomic, readonly) unsigned long long cloudFeatures;
@property (nonatomic, readonly) bool hasCloudDevices;
@property (nonatomic, readonly) bool hasPairedDevices;
@property (nonatomic, readonly) unsigned long long pairedFeatures;

+ (id)accountFeaturesWithCloud:(unsigned long long)arg1 hasCloudDevices:(bool)arg2 paired:(unsigned long long)arg3 hasPairedDevices:(bool)arg4;
+ (bool)supportsSecureCoding;

- (id)_initWithCloud:(unsigned long long)arg1 hasCloud:(bool)arg2 paired:(unsigned long long)arg3 hasPaired:(bool)arg4;
- (unsigned long long)cloudFeatures;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCloudDevices;
- (bool)hasPairedDevices;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)pairedFeatures;

@end
