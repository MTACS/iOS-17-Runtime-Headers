
@interface DACActivityDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    bool  _localOnly;
    DACUnknownActivityPolicy * _policy;
    unsigned long long  _priority;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isLocalOnly, nonatomic, readonly) bool localOnly;
@property (nonatomic, readonly) DACUnknownActivityPolicy *policy;
@property (nonatomic, readonly) unsigned long long priority;

+ (id)activityDescriptorWithIdentifier:(id)arg1 priority:(unsigned long long)arg2 policy:(id)arg3;
+ (id /* block */)comparator;
+ (id)localOnlyActivityDescriptorWithIdentifier:(id)arg1 priority:(unsigned long long)arg2 policy:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalOnly;
- (id)policy;
- (unsigned long long)priority;

@end
