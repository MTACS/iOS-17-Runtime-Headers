
@interface SSDownloadManifestResponse : NSObject <NSSecureCoding, SSXPCCoding> {
    NSArray * _validDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSArray *validDownloads;

+ (bool)supportsSecureCoding;

- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setValidDownloads:(id)arg1;
- (id)validDownloads;

@end
