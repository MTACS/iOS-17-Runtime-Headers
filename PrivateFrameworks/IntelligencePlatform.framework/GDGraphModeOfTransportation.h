
@interface GDGraphModeOfTransportation : NSObject <GDGraphObject> {
    NSArray * _allTransportationType;
    GDGraphModeOfTransportationEntityIdentifier * _entityIdentifier;
    NSNumber * _transportationType;
}

@property (nonatomic, readonly, copy) NSArray *allTransportationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphModeOfTransportationEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *transportationType;

- (void).cxx_destruct;
- (id)allTransportationType;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 transportationTypeField:(id)arg2 allTransportationTypeField:(id)arg3;
- (id)transportationType;

@end
