
@interface REMTTHashtag : NSObject {
    NSString * _objectIdentifier;
}

@property (nonatomic, readonly) NSString *objectIdentifier;

+ (id)attributeFromHashtag:(id)arg1;
+ (id)attributeName;
+ (bool)attributeValue:(id)arg1 hasEqualHashtagObjectIdentifierIn:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectIdentifier:(id)arg1;
- (id)objectIdentifier;

@end
