
@interface IREventDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _contextIdentifier;
    long long  _eventSubType;
    long long  _eventType;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, readonly) long long eventSubType;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSString *name;

+ (id)eventDOWithAppleTVControlType:(long long)arg1;
+ (id)eventDOWithEventType:(long long)arg1 eventSubType:(long long)arg2 name:(id)arg3 bundleID:(id)arg4 contextIdentifier:(id)arg5;
+ (id)eventDOWithMediaType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contextIdentifier;
- (id)copyWithReplacementBundleID:(id)arg1;
- (id)copyWithReplacementContextIdentifier:(id)arg1;
- (id)copyWithReplacementEventSubType:(long long)arg1;
- (id)copyWithReplacementEventType:(long long)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventSubType;
- (long long)eventType;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 eventSubType:(long long)arg2 name:(id)arg3 bundleID:(id)arg4 contextIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventDO:(id)arg1;
- (id)name;

@end
