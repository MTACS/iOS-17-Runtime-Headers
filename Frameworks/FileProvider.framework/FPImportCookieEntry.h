
@interface FPImportCookieEntry : NSObject <NSSecureCoding> {
    NSString * _domainPathRelativeToVolumeRoot;
    unsigned long long  _fileID;
}

@property (nonatomic, readonly) NSString *domainPathRelativeToVolumeRoot;
@property (nonatomic, readonly) unsigned long long fileID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainPathRelativeToVolumeRoot;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainURL:(id)arg1 error:(id*)arg2;

@end
