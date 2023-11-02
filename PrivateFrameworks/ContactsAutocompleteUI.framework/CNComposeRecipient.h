
@interface CNComposeRecipient : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    NSString * _address;
    CNAutocompleteResult * _autocompleteResult;
    NSArray * _cachedCompleteMatches;
    NSSet * _cachedHandles;
    NSArray * _cachedMatchedStrings;
    NSArray * _cachedSortedMembers;
    NSString * _compositeName;
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSString * _countryCode;
    NSString * _displayString;
    NSString * _inputAddress;
    bool  _isMemberOfGroup;
    unsigned long long  _kind;
    NSString * _label;
    NSPersonNameComponents * _nameComponents;
    CNComposeRecipientOriginContext * _originContext;
    NSString * _unlocalizedLabel;
    NSString * _valueIdentifier;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, retain) CNAutocompleteResult *autocompleteResult;
@property (nonatomic, retain) NSArray *cachedCompleteMatches;
@property (nonatomic, retain) NSSet *cachedHandles;
@property (nonatomic, retain) NSArray *cachedMatchedStrings;
@property (nonatomic, retain) NSArray *cachedSortedMembers;
@property (nonatomic, readonly) NSString *commentedAddress;
@property (nonatomic, copy) NSString *compositeName;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inputAddress;
@property (nonatomic, readonly) bool isDirectoryServerResult;
@property (nonatomic, readonly) bool isGroup;
@property (nonatomic) bool isMemberOfGroup;
@property (nonatomic, readonly) bool isSuggestedRecipient;
@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *normalizedAddress;
@property (nonatomic, retain) CNComposeRecipientOriginContext *originContext;
@property (nonatomic, readonly, copy) NSString *pasteboardString;
@property (nonatomic, readonly) NSString *placeholderName;
@property (getter=isRemovableFromSearchResults, nonatomic, readonly) bool removableFromSearchResults;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) bool showsAccessoryButton;
@property (nonatomic, readonly) bool showsChevronButton;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) NSString *stringForEqualityTesting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPasteboardUnarchiving;
@property (nonatomic, readonly) NSString *uncommentedAddress;
@property (nonatomic, copy) NSString *unlocalizedLabel;
@property (nonatomic, copy) NSString *valueIdentifier;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

+ (id)composeRecipientWithAutocompleteResult:(id)arg1;
+ (id)descriptorsForRequiredKeysForContact;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)os_log;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)_unformattedAddress;
- (void)addRecipientToPasteboard:(id)arg1;
- (id)address;
- (id)alternativeToDisplayString;
- (id)associatedHandles;
- (id)autocompleteResult;
- (id)cachedCompleteMatches;
- (id)cachedHandles;
- (id)cachedMatchedStrings;
- (id)cachedSortedMembers;
- (id)children;
- (id)childrenWithCompleteMatches;
- (id)commentedAddress;
- (id)completelyMatchedAttributedStrings;
- (id)compositeName;
- (id)contact;
- (id)contactIdentifier;
- (id)contactWithKeysToFetch:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)displayString;
- (id)displayStringPreferringNickname:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchContactWithKeys:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 displayString:(id)arg3 kind:(unsigned long long)arg4;
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (id)inputAddress;
- (bool)isDirectoryServerResult;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentAddressToRecipient:(id)arg1;
- (bool)isGroup;
- (bool)isMemberOfGroup;
- (bool)isRemovableFromSearchResults;
- (bool)isSuggestedRecipient;
- (unsigned long long)kind;
- (id)label;
- (id)labeledValueIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)nameComponents;
- (id)normalizedAddress;
- (id)originContext;
- (id)pasteboardString;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)rawDisplayString;
- (void)setAddress:(id)arg1;
- (void)setAutocompleteResult:(id)arg1;
- (void)setCachedCompleteMatches:(id)arg1;
- (void)setCachedHandles:(id)arg1;
- (void)setCachedMatchedStrings:(id)arg1;
- (void)setCachedSortedMembers:(id)arg1;
- (void)setCompositeName:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setInputAddress:(id)arg1;
- (void)setIsMemberOfGroup:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setOriginContext:(id)arg1;
- (void)setUnlocalizedLabel:(id)arg1;
- (void)setValueIdentifier:(id)arg1;
- (id)shortName;
- (bool)showsAccessoryButton;
- (bool)showsChevronButton;
- (id)sortedChildren;
- (unsigned long long)sourceType;
- (id)stringForEqualityTesting;
- (bool)supportsPasteboardUnarchiving;
- (id)uncommentedAddress;
- (id)unifiedHandles;
- (id)unlocalizedLabel;
- (id)valueIdentifier;
- (bool)wasCompleteMatch;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)IDSCanonicalAddress;
- (id)IDSCanonicalAddressForAddress:(id)arg1;
- (id)canonicalAddress;
- (struct __CFPhoneNumber { }*)copyPhoneNumber;
- (bool)isEmail;
- (bool)isNamedGroup;
- (bool)isNotAChildOfUnifiedRecipient;
- (bool)isPhone;
- (bool)isUnnamedGroup;
- (id)rawAddress;
- (void)setCanonicalAddress:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)wf_composeRecipientForContact:(id)arg1;

- (id)wf_contactFieldEntry;

@end
