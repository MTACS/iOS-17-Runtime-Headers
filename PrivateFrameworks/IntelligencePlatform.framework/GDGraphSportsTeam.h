
@interface GDGraphSportsTeam : NSObject <GDGraphObject> {
    NSArray * _allName;
    NSArray * _allQid;
    NSArray * _allUmcIdentifier;
    GDGraphSportsTeamEntityIdentifier * _entityIdentifier;
    NSArray * _identifiers;
    NSString * _name;
    NSString * _qid;
    NSString * _umcIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allQid;
@property (nonatomic, readonly, copy) NSArray *allUmcIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphSportsTeamEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *qid;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *umcIdentifier;

- (void).cxx_destruct;
- (id)allName;
- (id)allQid;
- (id)allUmcIdentifier;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)identifiers;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 identifiersField:(id)arg3 qidField:(id)arg4 umcIdentifierField:(id)arg5 allNameField:(id)arg6 allQidField:(id)arg7 allUmcIdentifierField:(id)arg8;
- (id)name;
- (id)qid;
- (id)umcIdentifier;

@end
