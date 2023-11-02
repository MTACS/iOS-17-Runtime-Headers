
@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    bool  _autoArchive;
    NSURL * _directUrl;
    NSDate * _expiration;
    NSString * _fileName;
    long long  _fileSize;
    unsigned long long  _flags;
    bool  _isInvalid;
    NSString * _mimeType;
    NSURL * _wrappedUrl;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic) bool autoArchive;
@property (nonatomic, retain) NSURL *directUrl;
@property (nonatomic, retain) NSDate *expiration;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool isInvalid;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) NSURL *wrappedUrl;

+ (id)mailDropMetadata;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (bool)autoArchive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)directUrl;
- (id)directUrlString;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)fileName;
- (long long)fileSize;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (bool)isBanner;
- (bool)isBannerWithMultiple;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isInvalid;
- (bool)isPhotoArchive;
- (void)merge:(id)arg1;
- (id)mimeType;
- (void)setAutoArchive:(bool)arg1;
- (void)setDirectUrl:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setWrappedUrl:(id)arg1;
- (id)wrappedUrl;
- (id)wrappedUrlString;

@end
