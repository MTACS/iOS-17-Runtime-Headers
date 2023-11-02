
@interface MusicKit_SoftLinking_MPModelObject : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    long long  _modelObjectType;
    MPModelObject * _underlyingModelObject;
}

@property (nonatomic, readonly) MPModelObject *_underlyingModelObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPIdentifierSet> *legacyIdentifierSet;
@property (nonatomic, readonly) long long libraryRemovalSupportedOptions;
@property (nonatomic, readonly) long long modelObjectType;
@property (nonatomic, readonly) NSDictionary *storageDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id underlyingObject;

+ (id)_createUnderlyingModelObjectWithIdentifierSet:(id)arg1 modelObjectType:(long long)arg2 storageDictionary:(id)arg3;
+ (id)archivedDataWithUnderlyingModelObject:(id)arg1 error:(id*)arg2;
+ (long long)keepLocalEnabledStateForRawValue:(long long)arg1;
+ (long long)keepLocalManagedStatusForRawValue:(long long)arg1;
+ (unsigned long long)keepLocalManagedStatusReasonsForRawValue:(long long)arg1;
+ (long long)rawValueForKeepLocalEnabledState:(long long)arg1;
+ (long long)rawValueForKeepLocalManagedStatus:(long long)arg1;
+ (long long)rawValueForKeepLocalManagedStatusReasons:(unsigned long long)arg1;
+ (id)unarchiveUnderlyingModelObjectWithData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_underlyingModelObject;
- (unsigned long long)hash;
- (id)initWithIdentifierSet:(id)arg1 modelObjectType:(long long)arg2 storageDictionary:(id)arg3;
- (id)initWithUnderlyingModelObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)legacyIdentifierSet;
- (long long)libraryRemovalSupportedOptions;
- (long long)modelObjectType;
- (id)storageDictionary;
- (id)underlyingObject;

@end
