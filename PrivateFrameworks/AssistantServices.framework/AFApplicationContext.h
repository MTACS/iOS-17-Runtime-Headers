
@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding> {
    AceObject * _aceContext;
    NSArray * _aceContexts;
    NSString * _associatedBundleIdentifier;
    AFBulletin * _bulletin;
    NSDictionary * _contextDictionary;
}

@property (nonatomic, readonly, copy) AceObject *aceContext;
@property (nonatomic, readonly, copy) NSArray *aceContexts;
@property (nonatomic, readonly, copy) NSString *associatedBundleIdentifier;
@property (nonatomic, readonly, copy) AFBulletin *bulletin;
@property (nonatomic, readonly, copy) NSDictionary *contextDictionary;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)aceContext;
- (id)aceContexts;
- (id)associatedBundleIdentifier;
- (id)bulletin;
- (id)contextDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4 aceContexts:(id)arg5;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
