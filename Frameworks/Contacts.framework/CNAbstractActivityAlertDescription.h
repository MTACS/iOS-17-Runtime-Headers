
@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNMutableValueForABMultivalue;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (Class)valueClass;

@end
