
@interface DEDBugSessionConfiguration : NSObject <DEDSecureArchiving, NSCopying, NSSecureCoding> {
    bool  _allowsCellularUpload;
    double  _bugSessionStartTimeout;
    NSString * _cloudkitContainer;
    NSDictionary * _cloudkitData;
    bool  _cloudkitUseDevelopmentEnvironment;
    long long  _finishingMove;
    DEDNotifierConfiguration * _notifierConfiguration;
    long long  _notifyingMove;
    NSString * _radarAuthToken;
    NSNumber * _radarProblemID;
    NSSet * _requestedCapabilities;
    NSString * _seedingDeviceToken;
    long long  _seedingEnvironment;
    NSString * _seedingHost;
    long long  _seedingSubmissionID;
    long long  _seedingSubmissionType;
}

@property bool allowsCellularUpload;
@property double bugSessionStartTimeout;
@property (retain) NSString *cloudkitContainer;
@property (retain) NSDictionary *cloudkitData;
@property bool cloudkitUseDevelopmentEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long finishingMove;
@property (readonly) unsigned long long hash;
@property (retain) DEDNotifierConfiguration *notifierConfiguration;
@property long long notifyingMove;
@property (retain) NSString *radarAuthToken;
@property (retain) NSNumber *radarProblemID;
@property (readonly) NSString *requestedCapabilitiesString;
@property (retain) NSString *seedingDeviceToken;
@property long long seedingEnvironment;
@property (retain) NSString *seedingHost;
@property long long seedingSubmissionID;
@property long long seedingSubmissionType;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)secureUnarchiveWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularUpload;
- (double)bugSessionStartTimeout;
- (id)cloudkitContainer;
- (id)cloudkitData;
- (bool)cloudkitUseDevelopmentEnvironment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)finishingMove;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)notifierConfiguration;
- (long long)notifyingMove;
- (id)radarAuthToken;
- (id)radarProblemID;
- (void)requestCapabilities:(id)arg1;
- (void)requestCapabilitiesSet:(id)arg1;
- (id)requestedCapabilities;
- (id)requestedCapabilitiesString;
- (id)secureArchive;
- (id)seedingDeviceToken;
- (long long)seedingEnvironment;
- (id)seedingHost;
- (long long)seedingSubmissionID;
- (long long)seedingSubmissionType;
- (void)setAllowsCellularUpload:(bool)arg1;
- (void)setBugSessionStartTimeout:(double)arg1;
- (void)setCloudkitContainer:(id)arg1;
- (void)setCloudkitData:(id)arg1;
- (void)setCloudkitUseDevelopmentEnvironment:(bool)arg1;
- (void)setFinishingMove:(long long)arg1;
- (void)setNotifierConfiguration:(id)arg1;
- (void)setNotifyingMove:(long long)arg1;
- (void)setRadarAuthToken:(id)arg1;
- (void)setRadarProblemID:(id)arg1;
- (void)setSeedingDeviceToken:(id)arg1;
- (void)setSeedingEnvironment:(long long)arg1;
- (void)setSeedingHost:(id)arg1;
- (void)setSeedingSubmissionID:(long long)arg1;
- (void)setSeedingSubmissionType:(long long)arg1;

@end
