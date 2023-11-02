
@interface PRPosterSnapshotRequest : NSObject <NSSecureCoding> {
    NSDate * _date;
    PRPosterSnapshotLegibilityProcessingRequest * _legibilityProcessingRequest;
    unsigned long long  _output;
    PRSPosterPath * _path;
    long long  _priority;
    NSString * _provider;
    PRPosterSceneSettings * _settings;
    NSArray * _snapshotLevelSets;
    double  _timeoutInterval;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) PRPosterSnapshotLegibilityProcessingRequest *legibilityProcessingRequest;
@property (nonatomic, readonly) unsigned long long output;
@property (nonatomic, readonly) PRSPosterPath *path;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) PRPosterSceneSettings *settings;
@property (nonatomic, readonly) NSArray *snapshotLevelSets;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 settings:(id)arg2 output:(unsigned long long)arg3 priority:(long long)arg4 snapshotLevelSets:(id)arg5 snapshotLegibilityProcessingRequest:(id)arg6 timeout:(double)arg7;
- (id)legibilityProcessingRequest;
- (unsigned long long)output;
- (id)path;
- (long long)priority;
- (id)provider;
- (id)settings;
- (id)snapshotLevelSets;
- (double)timeoutInterval;
- (id)uniqueIdentifier;

@end
