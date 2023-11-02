
@interface WFCNContactGroup : WFContactGroup {
    NSArray * _cachedMembers;
    CNGroup * _group;
}

@property (nonatomic, retain) NSArray *cachedMembers;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CNGroup *group;

+ (id)allContactGroups;
+ (id)contactGroupWithCNGroup:(id)arg1;

- (void).cxx_destruct;
- (id)cachedMembers;
- (id)contacts;
- (bool)containsContact:(id)arg1;
- (id)group;
- (id)initWithCNGroup:(id)arg1;
- (id)name;
- (void)setCachedMembers:(id)arg1;

@end
