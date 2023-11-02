
@interface NSFileProviderRequest : NSObject <NSSecureCoding> {
    NSFileProviderDomainVersion * _domainVersion;
    NSUUID * _requestingApplicationIdentifier;
    NSURL * _requestingExecutable;
    bool  _speculativeDownload;
}

@property (nonatomic, retain) NSFileProviderDomainVersion *domainVersion;
@property (nonatomic, readonly) bool isFileViewerRequest;
@property (nonatomic, readonly) bool isSystemRequest;
@property (nonatomic, retain) NSUUID *requestingApplicationIdentifier;
@property (nonatomic, copy) NSURL *requestingExecutable;
@property (getter=isSpeculativeDownload, nonatomic, readonly) bool speculativeDownload;

+ (id)_dsIdentifier;
+ (id)_finderIdentifier;
+ (id)_fpdIdentifier;
+ (id)requestFromTheSystem;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsSpeculativeDownload:(bool)arg1;
- (bool)isFileViewerRequest;
- (bool)isSpeculativeDownload;
- (bool)isSystemRequest;
- (id)requestingApplicationIdentifier;
- (id)requestingExecutable;
- (void)setDomainVersion:(id)arg1;
- (void)setRequestingApplicationIdentifier:(id)arg1;
- (void)setRequestingExecutable:(id)arg1;

@end
