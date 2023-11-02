
@interface CTRemoteBlacklistPlan : CTPlan {
    NSString * _blacklistEID;
    NSString * _blacklistICCID;
    NSString * _blacklistIMEI;
    NSString * _key;
    NSString * _uploaderEID;
    NSString * _uploaderIMEI;
}

@property (nonatomic, readonly) NSString *blacklistEID;
@property (nonatomic, readonly) NSString *blacklistICCID;
@property (nonatomic, readonly) NSString *blacklistIMEI;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *uploaderEID;
@property (nonatomic, readonly) NSString *uploaderIMEI;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blacklistEID;
- (id)blacklistICCID;
- (id)blacklistIMEI;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithkey:(id)arg1 blacklistIMEI:(id)arg2 blacklistEID:(id)arg3 blacklistICCID:(id)arg4 uploaderIMEI:(id)arg5 uploaderEID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)uploaderEID;
- (id)uploaderIMEI;

@end
