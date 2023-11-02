
@interface AVAudioApplicationSpecification : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _appAuditToken;
    NSString * attributionBundleID;
    long long  audioAppType;
    NSString * processName;
}

@property (nonatomic) struct { unsigned int x1[8]; } appAuditToken;
@property (nonatomic, retain) NSString *attributionBundleID;
@property (nonatomic) long long audioAppType;
@property (nonatomic, retain) NSString *processName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })appAuditToken;
- (id)attributionBundleID;
- (long long)audioAppType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)processName;
- (void)setAppAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setAttributionBundleID:(id)arg1;
- (void)setAudioAppType:(long long)arg1;
- (void)setProcessName:(id)arg1;

@end
