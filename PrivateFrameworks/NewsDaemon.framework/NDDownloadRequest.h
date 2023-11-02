
@interface NDDownloadRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contentID;
    long long  _contentType;
    long long  _options;
}

@property (nonatomic, readonly, copy) NSString *contentID;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentID;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1 options:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)options;

@end
