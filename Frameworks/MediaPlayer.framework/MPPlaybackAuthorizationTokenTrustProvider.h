
@interface MPPlaybackAuthorizationTokenTrustProvider : NSObject <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider, NSCopying, NSSecureCoding> {
    long long  _requestSource;
    NSString * _trustID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long requestSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *trustID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestSource:(long long)arg1;
- (long long)requestSource;
- (void)setRequestSource:(long long)arg1;
- (void)setTrustID:(id)arg1;
- (id)trustID;

@end
