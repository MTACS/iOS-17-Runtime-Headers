
@interface CNLocalAccountSyncRequest : CNAccountSyncRequest <NSCopying, NSSecureCoding> {
    bool  _clearify;
    bool  _resetStandby;
    unsigned long long  _retryCount;
    bool  _standby;
}

@property bool clearify;
@property bool resetStandby;
@property unsigned long long retryCount;
@property bool standby;

+ (id)argumentsForRequest:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)clearify;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)resetStandby;
- (unsigned long long)retryCount;
- (void)setClearify:(bool)arg1;
- (void)setResetStandby:(bool)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setStandby:(bool)arg1;
- (bool)standby;

@end
