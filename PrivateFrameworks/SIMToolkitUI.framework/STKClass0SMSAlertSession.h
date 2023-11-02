
@interface STKClass0SMSAlertSession : STKAlertSession {
    long long  _slot;
}

@property (nonatomic, readonly) long long slot;

+ (bool)_requiresResponseProvider;

- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4 slot:(long long)arg5;
- (long long)slot;

@end
