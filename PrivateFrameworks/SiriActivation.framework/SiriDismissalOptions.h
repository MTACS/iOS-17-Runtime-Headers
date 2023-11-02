
@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _animated;
    unsigned long long  _deactivationOptions;
    long long  _dismissalReason;
    long long  _reason;
    bool  _shouldTurnScreenOff;
}

@property (nonatomic, readonly) bool animated;
@property (nonatomic, readonly) unsigned long long deactivationOptions;
@property (nonatomic, readonly) long long dismissalReason;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) bool shouldTurnScreenOff;

+ (bool)supportsSecureCoding;

- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deactivationOptions;
- (id)description;
- (long long)dismissalReason;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2 dismissalReason:(long long)arg3;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2 requestCancellationReason:(long long)arg3;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2 requestCancellationReason:(long long)arg3 dismissalReason:(long long)arg4;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2 requestCancellationReason:(long long)arg3 dismissalReason:(long long)arg4 shouldTurnScreenOff:(bool)arg5;
- (long long)reason;
- (bool)shouldTurnScreenOff;

@end
