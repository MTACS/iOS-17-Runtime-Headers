
@interface IPAPreviewSizeRegistry : NSObject {
    NSString * _name;
    NSMutableDictionary * _policies;
}

- (void).cxx_destruct;
- (void)addPolicy:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)policyForStyle:(unsigned long long)arg1;
- (id)policyForStyleObject:(id)arg1;

@end
