
@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription> {
    CNContactRelationsDescriptionLabels * _cachedLabels;
    NSObject<OS_dispatch_queue> * _generationQueue;
    Class  _provider;
}

@property (nonatomic, retain) CNContactRelationsDescriptionLabels *cachedLabels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *generationQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class provider;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void).cxx_destruct;
- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNValueForContact:(id)arg1;
- (void)_addLocalizedLabels:(id)arg1 fromLanguagePlist:(id)arg2 languageIdentifier:(id)arg3 toDictionary:(id)arg4 conflictInfo:(id)arg5;
- (id)_builtInExtendedLabels;
- (id)_builtInStandardLabels;
- (bool)abPropertyID:(int*)arg1;
- (id)cachedLabels;
- (id)cachedLabelsForPreferredLanguages:(id)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id /* block */)fromPlistTransform;
- (id)generationQueue;
- (id)init;
- (id)initWithLocalizationProvider:(Class)arg1;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isNonnull;
- (Class)labeledValueClass;
- (id)labelsForPreferredLanguages:(id)arg1;
- (id)localizedStringForLabel:(id)arg1;
- (id)managedLabels;
- (id /* block */)plistTransform;
- (Class)provider;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (void)setCachedLabels:(id)arg1;
- (id)standardLabels;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id /* block */)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (id /* block */)CNLabeledValueFromABSMultiValueTranform;
- (bool)absPropertyID:(int*)arg1;
- (unsigned int)absPropertyType;

@end
