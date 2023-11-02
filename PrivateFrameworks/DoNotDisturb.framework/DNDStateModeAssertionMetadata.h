
@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _activeDateInterval;
    NSString * _clientIdentifier;
    unsigned long long  _lifetimeType;
    NSString * _modeIdentifier;
    NSDate * _userVisibleEndDate;
}

@property (nonatomic, readonly, copy) NSDateInterval *activeDateInterval;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned long long lifetimeType;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;
@property (nonatomic, readonly, copy) NSDate *userVisibleEndDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDateInterval;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetimeType:(unsigned long long)arg3 activeDateInterval:(id)arg4 userVisibleEndDate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)modeIdentifier;
- (id)userVisibleEndDate;

@end
