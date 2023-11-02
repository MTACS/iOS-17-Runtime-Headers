
@interface HMAccessoryDiagnosticsMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _consentVersion;
    NSURL * _privacyPolicyURL;
    NSString * _snapshotPath;
    NSURL * _uploadDestination;
    NSNumber * _uploadType;
    NSDictionary * _urlParameters;
}

@property (readonly) NSNumber *consentVersion;
@property (readonly) NSURL *privacyPolicyURL;
@property (readonly) NSString *snapshotPath;
@property (readonly) NSURL *uploadDestination;
@property (readonly) NSNumber *uploadType;
@property (readonly, copy) NSDictionary *urlParameters;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)consentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotPath:(id)arg1 urlParameters:(id)arg2 privacyPolicyURL:(id)arg3 uploadDestination:(id)arg4 consentVersion:(id)arg5 uploadType:(id)arg6;
- (id)privacyPolicyURL;
- (id)snapshotPath;
- (id)uploadDestination;
- (id)uploadType;
- (id)urlParameters;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_serviceURL:(id)arg1 withParameters:(id)arg2;

- (id)hf_serviceURLWithParameters;

@end
