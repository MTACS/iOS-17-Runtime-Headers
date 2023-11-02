
@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _behavior;
    NSString * _bundleIdentifier;
    NSString * _filterCriteria;
    NSString * _identifier;
    bool  _notifyAnyway;
    DNDContactHandle * _sender;
    NSString * _threadIdentifier;
    unsigned long long  _type;
    unsigned long long  _urgency;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *filterCriteria;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool notifyAnyway;
@property (nonatomic, readonly, copy) DNDContactHandle *sender;
@property (nonatomic, readonly) bool shouldAlwaysInterrupt;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long urgency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 urgency:(unsigned long long)arg4 sender:(id)arg5 threadIdentifier:(id)arg6 filterCriteria:(id)arg7 notifyAnyway:(bool)arg8 behavior:(unsigned long long)arg9;
- (unsigned long long)behavior;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCriteria;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)notifyAnyway;
- (id)redactedDescription;
- (id)sender;
- (bool)shouldAlwaysInterrupt;
- (id)threadIdentifier;
- (unsigned long long)type;
- (unsigned long long)urgency;

@end
