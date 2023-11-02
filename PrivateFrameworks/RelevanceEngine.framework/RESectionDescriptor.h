
@interface RESectionDescriptor : NSObject <NSCopying, REAutomaticExportedInterface> {
    REHistoricSectionDescriptor * _historicSectionDescriptor;
    long long  _maxElementCount;
    NSString * _name;
    NSOrderedSet * _rules;
}

@property (nonatomic, retain) REHistoricSectionDescriptor *historicSectionDescriptor;
@property (nonatomic) long long maxElementCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *orderedRules;
@property (nonatomic, copy) NSSet *rules;

+ (id)defaultSectionDescriptorForIdentifier:(id)arg1;
+ (id)defaultUpNextSectionDescriptorForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)historicSectionDescriptor;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maxElementCount;
- (id)name;
- (id)orderedRules;
- (id)rules;
- (void)setHistoricSectionDescriptor:(id)arg1;
- (void)setMaxElementCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOrderedRules:(id)arg1;
- (void)setRules:(id)arg1;

@end
