
@interface HKSPSleepEvent : NSObject <BSDescriptionProviding, HKSPDictionarySerializable, HKSPXPCObject, NAEquatable, NAHashable, NSCopying, NSSecureCoding> {
    NSDate * _dueDate;
    NSDate * _expirationDate;
    NSString * _identifier;
    bool  _isUserVisible;
    <HKSPSyncAnchor> * _syncAnchor;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *dueDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isUserVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;
@property (nonatomic, readonly) unsigned long long type;

+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2;
+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 expirationDate:(id)arg3 isUserVisible:(bool)arg4;
+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 isUserVisible:(bool)arg3;
+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3;
+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 expirationDate:(id)arg4 isUserVisible:(bool)arg5;
+ (id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 isUserVisible:(bool)arg4;
+ (id)standardEventIdentifiers;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 expirationDate:(id)arg4 isUserVisible:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isExpired:(id)arg1;
- (bool)isUserVisible;
- (id)objectWithSyncAnchor:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)syncAnchor;
- (unsigned long long)type;

@end
