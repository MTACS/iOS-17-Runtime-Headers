
@interface GDGraphQuantityRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allQuantity;
    NSString * _quantity;
}

@property (nonatomic, readonly, copy) NSArray *allQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *quantity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allQuantity;
- (Class)graphObjectType;
- (id)initWithQuantityField:(id)arg1 allQuantityField:(id)arg2;
- (id)quantity;

@end
