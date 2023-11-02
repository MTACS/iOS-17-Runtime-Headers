
@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _anchorLimitModifiedDate;
    long long  _mode;
    long long  _request;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSDate *anchorLimitModifiedDate;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long request;
@property (nonatomic) long long status;

+ (id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)anchorLimitModifiedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deniedReading;
- (bool)deniedSharing;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleStatus:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mode;
- (bool)readingEnabled;
- (id)recordWithReadingDisabled;
- (id)recordWithSharingDisabled;
- (long long)request;
- (bool)requestedReading;
- (bool)requestedSharing;
- (void)setStatus:(long long)arg1;
- (bool)sharingEnabled;
- (long long)status;

@end
