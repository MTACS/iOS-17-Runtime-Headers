
@interface ASDManifestRequest : NSObject <NSSecureCoding> {
    long long  _archiveType;
    NSArray * _certificates;
    NSDictionary * _manifest;
    NSURL * _manifestURL;
    bool  _pinningRevocationCheckRequired;
    NSUUID * _requestIdentifier;
}

@property long long archiveType;
@property (retain) NSArray *certificates;
@property (retain) NSDictionary *manifest;
@property (retain) NSURL *manifestURL;
@property bool pinningRevocationCheckRequired;
@property (retain) NSUUID *requestIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)archiveType;
- (id)certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifest;
- (id)manifestURL;
- (bool)pinningRevocationCheckRequired;
- (id)requestIdentifier;
- (void)setArchiveType:(long long)arg1;
- (void)setCertificates:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setManifestURL:(id)arg1;
- (void)setPinningRevocationCheckRequired:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;

@end
