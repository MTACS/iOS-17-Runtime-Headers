
@interface STKNotifySessionData : STKTextSessionData {
    long long  _notifyType;
}

@property (nonatomic, readonly) long long notifyType;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 notifyType:(long long)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)notifyType;

@end
