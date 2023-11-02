
@interface STDictionaryData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    NSMutableDictionary * _objectsAndKeys;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSDictionary *objectsAndKeys;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectsAndKeys:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsAndKeys;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)validateObjectsAndKeysWithValidObjectClasses:(id)arg1 keyClasses:(id)arg2;

@end
