
@interface IREvent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

// Image: /System/Library/PrivateFrameworks/IntelligentRouting.framework/IntelligentRouting

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contextIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventSubType;
- (long long)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

+ (id)eventFromEventDO:(id)arg1;
+ (id)eventSubTypeStringEventDO:(id)arg1;
+ (id)eventTypeStringEventDO:(id)arg1;

- (id)eventDO;

@end
