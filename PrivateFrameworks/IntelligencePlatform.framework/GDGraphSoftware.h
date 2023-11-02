
@interface GDGraphSoftware : NSObject <GDGraphObject> {
    NSArray * _allBundleId;
    NSArray * _allName;
    NSString * _bundleId;
    GDGraphSoftwareEntityIdentifier * _entityIdentifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *allBundleId;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphSoftwareEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allBundleId;
- (id)allName;
- (id)bundleId;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 bundleIdField:(id)arg2 nameField:(id)arg3 allBundleIdField:(id)arg4 allNameField:(id)arg5;
- (id)name;

@end
