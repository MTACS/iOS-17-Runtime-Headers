
@interface NEPolicySessionFileHandle : NEFileHandle {
    NSString * _name;
}

@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPolicySession:(id)arg1;
- (id)initWithPolicySession:(id)arg1 name:(id)arg2;
- (id)name;
- (unsigned long long)type;

@end
