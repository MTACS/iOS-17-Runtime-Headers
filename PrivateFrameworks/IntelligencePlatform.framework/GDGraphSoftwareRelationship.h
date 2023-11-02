
@interface GDGraphSoftwareRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allSoftwareId;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _softwareId;
}

@property (nonatomic, readonly, copy) NSArray *allSoftwareId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *softwareId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allSoftwareId;
- (Class)graphObjectType;
- (id)initWithSoftwareIdField:(id)arg1 allSoftwareIdField:(id)arg2;
- (id)softwareId;

@end
