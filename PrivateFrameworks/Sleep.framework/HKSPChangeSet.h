
@interface HKSPChangeSet : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _changeDictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *changeDictionary;
@property (nonatomic, readonly) NSArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *topLevelChangeKeys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addChange:(id)arg1;
- (void)applyChangeSet:(id)arg1;
- (id)changeDictionary;
- (id)changedValueForPropertyIdentifier:(id)arg1;
- (id)changes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopy;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChangeForPropertyIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChangeDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalValueForPropertyIdentifier:(id)arg1;
- (void)removeAllChanges;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)topLevelChangeKeys;

@end
