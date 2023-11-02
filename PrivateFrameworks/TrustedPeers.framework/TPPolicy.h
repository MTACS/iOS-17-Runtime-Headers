
@interface TPPolicy : NSObject <NSSecureCoding> {
    NSDictionary * _categoriesByView;
    NSSet * _inheritedExcludedViews;
    NSDictionary * _introducersByCategory;
    NSArray * _keyViewMapping;
    NSArray * _modelToCategory;
    NSSet * _piggybackViews;
    NSSet * _priorityViews;
    bool  _unknownRedactions;
    NSSet * _userControllableViewList;
    TPPolicyVersion * _version;
}

@property (nonatomic, retain) NSDictionary *categoriesByView;
@property (nonatomic, retain) NSSet *inheritedExcludedViews;
@property (nonatomic, retain) NSDictionary *introducersByCategory;
@property (nonatomic, retain) NSArray *keyViewMapping;
@property (nonatomic, retain) NSArray *modelToCategory;
@property (nonatomic, retain) NSSet *piggybackViews;
@property (nonatomic, retain) NSSet *priorityViews;
@property bool unknownRedactions;
@property (nonatomic, retain) NSSet *userControllableViewList;
@property (nonatomic, retain) TPPolicyVersion *version;

+ (id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(bool)arg5 userControllableViewList:(id)arg6 piggybackViews:(id)arg7 priorityViews:(id)arg8 inheritedExcludedViews:(id)arg9 version:(id)arg10;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoriesByView;
- (id)categoryForModel:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)inheritedExcludedViews;
- (id)initWithCoder:(id)arg1;
- (id)introducersByCategory;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPolicy:(id)arg1;
- (id)keyViewMapping;
- (id)modelToCategory;
- (bool)peerInCategory:(id)arg1 canAccessView:(id)arg2;
- (id)piggybackViews;
- (id)priorityViews;
- (void)setCategoriesByView:(id)arg1;
- (void)setInheritedExcludedViews:(id)arg1;
- (void)setIntroducersByCategory:(id)arg1;
- (void)setKeyViewMapping:(id)arg1;
- (void)setModelToCategory:(id)arg1;
- (void)setPiggybackViews:(id)arg1;
- (void)setPriorityViews:(id)arg1;
- (void)setUnknownRedactions:(bool)arg1;
- (void)setUserControllableViewList:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)syncingPolicyForModel:(id)arg1 syncUserControllableViews:(int)arg2 isInheritedAccount:(bool)arg3 error:(id*)arg4;
- (bool)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2;
- (bool)unknownRedactions;
- (id)userControllableViewList;
- (id)version;
- (id)viewsForModel:(id)arg1 error:(id*)arg2;

@end
