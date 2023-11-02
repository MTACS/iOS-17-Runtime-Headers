
@interface TRIXPCActivityState : NSObject <NSCopying> {
    unsigned long long  _capabilities;
    unsigned long long  _futureCompletionStatus;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) unsigned long long futureCompletionStatus;

+ (id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;

- (unsigned long long)capabilities;
- (id)copyWithReplacementCapabilities:(unsigned long long)arg1;
- (id)copyWithReplacementFutureCompletionStatus:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)futureCompletionStatus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToXPCActivityState:(id)arg1;

@end
