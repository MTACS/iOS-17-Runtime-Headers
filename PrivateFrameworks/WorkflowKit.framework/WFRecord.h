
@interface WFRecord : NSObject <NSCopying> {
    NSDictionary * _allPropertiesByName;
    NSMutableSet * _fetchedPropertyNames;
    NSMutableDictionary * _lastFetchedValues;
    NSMutableDictionary * _lastSavedOrFetchedValues;
    NSMutableSet * _modifiedPropertyNames;
    NSMutableSet * _modifiedPropertyNamesSinceLastSave;
    NSString * _storageIdentifier;
}

@property (nonatomic, readonly) NSSet *allProperties;
@property (nonatomic, readonly) NSDictionary *allPropertiesByName;
@property (nonatomic, readonly) NSSet *fetchedProperties;
@property (nonatomic, readonly) NSMutableSet *fetchedPropertyNames;
@property (nonatomic, readonly) NSMutableDictionary *lastFetchedValues;
@property (nonatomic, readonly) NSMutableDictionary *lastSavedOrFetchedValues;
@property (nonatomic, readonly) NSSet *modifiedProperties;
@property (nonatomic, readonly) NSSet *modifiedPropertiesSinceLastSave;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNames;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNamesSinceLastSave;
@property (nonatomic, copy) NSString *storageIdentifier;

+ (id)defaultPropertyValues;
+ (id)ignoredPropertyNames;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForClass:(Class)arg1 walkingSuperclassesUntilReaching:(Class)arg2;
+ (id)recordSubclassProperties;

- (void).cxx_destruct;
- (id)allProperties;
- (id)allPropertiesByName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithValues:(bool)arg1;
- (void)enumerateSettablePropertiesWithBlock:(id /* block */)arg1;
- (id)fetchedProperties;
- (id)fetchedPropertyNames;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 properties:(id)arg2;
- (id)initWithStorage:(id)arg1 properties:(id)arg2 settingDefaultValues:(bool)arg3;
- (id)lastFetchedValues;
- (id)lastSavedOrFetchedValues;
- (void)loadFromStorage:(id)arg1;
- (void)loadFromStorage:(id)arg1 properties:(id)arg2;
- (void)markPropertyModifiedIfNecessary:(id)arg1;
- (id)modifiedProperties;
- (id)modifiedPropertiesSinceLastSave;
- (id)modifiedPropertyNames;
- (id)modifiedPropertyNamesSinceLastSave;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resetModificationsForProperties:(id)arg1 onlySinceLastSave:(bool)arg2;
- (bool)saveChangesToStorage:(id)arg1 error:(id*)arg2;
- (bool)saveProperties:(id)arg1 toStorage:(id)arg2 error:(id*)arg3;
- (void)setDefaultPropertyValuesExceptFetched;
- (void)setStorageIdentifier:(id)arg1;
- (void)setupPropertyObservation;
- (id)storageIdentifier;
- (void)tearDownPropertyObservation;
- (bool)writeToStorage:(id)arg1 error:(id*)arg2;

@end
