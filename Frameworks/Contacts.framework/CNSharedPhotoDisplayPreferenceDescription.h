
@interface CNSharedPhotoDisplayPreferenceDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)abPropertyID:(int*)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (long long)flagsWithFlags:(id)arg1 displayPreference:(id)arg2;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (id)nilValue;
- (bool)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)sharedPhotoDisplayPreferenceFromFlags:(id)arg1;
- (Class)valueClass;

@end
