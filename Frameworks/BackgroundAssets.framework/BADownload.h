
@interface BADownload : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSString * _applicationGroupIdentifier;
    unsigned long long  _clientSpecifiedFileSize;
    NSString * _identifier;
    long long  _internalState;
    long long  _necessity;
    long long  _priority;
    NSURL * _stagedDownloadedFileURL;
    NSString * _uniqueIdentifier;
}

@property (retain) NSString *applicationGroupIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) bool isEssential;
@property long long necessity;
@property long long priority;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (id)classesForSerialization;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationGroupIdentifier;
- (bool)cloneDownloadToFinalDestinationURL:(id*)arg1 error:(id*)arg2;
- (id)copyAsNonEssential;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEssential;
- (long long)necessity;
- (long long)priority;
- (void)setApplicationGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNecessity:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (long long)state;
- (void)syncTo:(id)arg1;
- (id)uniqueIdentifier;

@end
