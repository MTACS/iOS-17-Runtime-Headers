
@interface HMFSystemPreference : HMFPreference <HMFObject> {
    NSString * _domain;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 parent:(id)arg5;
- (id)propertyDescription;

@end
