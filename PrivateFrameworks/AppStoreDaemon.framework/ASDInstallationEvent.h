
@interface ASDInstallationEvent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    long long  _installType;
    NSNumber * _itemID;
    long long  _phase;
    long long  _terminalPhase;
}

@property (readonly) long long appType;
@property (readonly) NSString *bundleID;
@property (readonly) long long installType;
@property (readonly) NSNumber *itemID;
@property (readonly) long long phase;
@property (readonly) long long source;
@property (readonly) long long terminalPhase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appType;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhase:(long long)arg1 terminalPhase:(long long)arg2 bundleID:(id)arg3 itemID:(id)arg4 appType:(long long)arg5 installType:(long long)arg6;
- (long long)installType;
- (id)itemID;
- (long long)phase;
- (long long)source;
- (long long)terminalPhase;

@end
