
@interface PRPosterSnapshotLegibilityProcessingRequest : NSObject <NSCopying, NSSecureCoding> {
    PRPosterLegibilitySettings * _desiredLegibilitySettings;
    bool  _determineColorStatistics;
}

@property (nonatomic, readonly) PRPosterLegibilitySettings *desiredLegibilitySettings;
@property (nonatomic, readonly) bool determineColorStatistics;

+ (id)defaultLegibilityProcessingRequest;
+ (id)defaultLegibilityProcessingRequestWithDesiredLegibilitySettings:(id)arg1 determineColorStatistics:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)desiredLegibilitySettings;
- (bool)determineColorStatistics;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredLegibilitySettings:(id)arg1 determineColorStatistics:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSnapshotLegibilityProcessingRequest:(id)arg1;

@end
