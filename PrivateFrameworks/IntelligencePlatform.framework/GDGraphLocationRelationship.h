
@interface GDGraphLocationRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allLabel;
    NSArray * _allLocationId;
    NSString * _label;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _locationId;
}

@property (nonatomic, readonly, copy) NSArray *allLabel;
@property (nonatomic, readonly, copy) NSArray *allLocationId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *locationId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allLabel;
- (id)allLocationId;
- (Class)graphObjectType;
- (id)initWithLabelField:(id)arg1 locationIdField:(id)arg2 allLabelField:(id)arg3 allLocationIdField:(id)arg4;
- (id)label;
- (id)locationId;

@end
