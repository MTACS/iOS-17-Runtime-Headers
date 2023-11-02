
@interface GDGraphAgentAffiliationRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allLabel;
    NSArray * _allPersonId;
    NSString * _label;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _personId;
}

@property (nonatomic, readonly, copy) NSArray *allLabel;
@property (nonatomic, readonly, copy) NSArray *allPersonId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *personId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allLabel;
- (id)allPersonId;
- (Class)graphObjectType;
- (id)initWithLabelField:(id)arg1 personIdField:(id)arg2 allLabelField:(id)arg3 allPersonIdField:(id)arg4;
- (id)label;
- (id)personId;

@end
