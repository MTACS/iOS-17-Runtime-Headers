
@interface GDGraphOrganization : NSObject <GDGraphObject> {
    NSArray * _allName;
    GDGraphOrganizationEntityIdentifier * _entityIdentifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *allName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphOrganizationEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allName;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 allNameField:(id)arg3;
- (id)name;

@end
