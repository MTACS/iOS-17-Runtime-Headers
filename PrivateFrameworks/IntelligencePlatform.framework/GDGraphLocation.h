
@interface GDGraphLocation : NSObject <GDGraphObject> {
    GDGraphLocationAddressRelationship * _address;
    NSArray * _allAddress;
    NSArray * _allLatLong;
    NSArray * _allLocationLabel;
    NSArray * _allMuid;
    NSArray * _allName;
    GDGraphLocationEntityIdentifier * _entityIdentifier;
    NSArray * _identifiers;
    GDGraphLocationLatLongRelationship * _latLong;
    NSString * _locationLabel;
    NSString * _muid;
    NSString * _name;
}

@property (nonatomic, readonly, copy) GDGraphLocationAddressRelationship *address;
@property (nonatomic, readonly, copy) NSArray *allAddress;
@property (nonatomic, readonly, copy) NSArray *allLatLong;
@property (nonatomic, readonly, copy) NSArray *allLocationLabel;
@property (nonatomic, readonly, copy) NSArray *allMuid;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) GDGraphLocationLatLongRelationship *latLong;
@property (nonatomic, readonly, copy) NSString *locationLabel;
@property (nonatomic, readonly, copy) NSString *muid;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)allAddress;
- (id)allLatLong;
- (id)allLocationLabel;
- (id)allMuid;
- (id)allName;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)identifiers;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 locationLabelField:(id)arg3 latLongField:(id)arg4 addressField:(id)arg5 identifiersField:(id)arg6 muidField:(id)arg7 allNameField:(id)arg8 allLocationLabelField:(id)arg9 allLatLongField:(id)arg10 allAddressField:(id)arg11 allMuidField:(id)arg12;
- (id)latLong;
- (id)locationLabel;
- (id)muid;
- (id)name;

@end
