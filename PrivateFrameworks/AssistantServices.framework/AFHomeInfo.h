
@interface AFHomeInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    bool  _activityNotificationsEnabledForPersonalRequests;
    NSUUID * _homeIdentifier;
}

@property (nonatomic, readonly) bool activityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *homeIdentifier;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (bool)activityNotificationsEnabledForPersonalRequests;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithHomeIdentifier:(id)arg1 activityNotificationsEnabledForPersonalRequests:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
