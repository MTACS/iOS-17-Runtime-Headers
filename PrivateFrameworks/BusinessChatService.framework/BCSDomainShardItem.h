
@interface BCSDomainShardItem : BCSShardItem <BCSDomainShardItemProtocol, NSCopying, NSSecureCoding> {
    NSURL * _fileURL;
}

@property (nonatomic, readonly) NSString *base64EncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long shardCount;
@property (nonatomic, readonly) long long startIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)shardItemWithFileURL:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;
- (id)initWithRecord:(id)arg1 type:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (void)setFileURL:(id)arg1;

@end
