
@interface MSPSharedTripContact : NSObject <NSSecureCoding> {
    CNContact * _contact;
    NSString * _displayName;
    CNLabeledValue * _labeledValue;
    NSString * _originalHandle;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *handleForIDS;
@property (nonatomic, readonly) bool isPhoneNumber;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (nonatomic, readonly) NSString *stringValue;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_propertiesForFetching;
+ (bool)_shouldSuppressBlockedHandles;
+ (bool)_suppressForHandle:(id)arg1;
+ (id)contactsFromCNContact:(id)arg1;
+ (id)contactsFromCNContact:(id)arg1 andIdentifiers:(id)arg2;
+ (id)contactsFromCNContact:(id)arg1 matchingHandles:(id)arg2;
+ (id)contactsFromHandles:(id)arg1;
+ (id)contactsFromIDSHandles:(id)arg1;
+ (bool)isHandleBlocked:(id)arg1;
+ (void)setAdditionalKeyDescriptorsForContactFetching:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_populateFromContactUsingHandle:(id)arg1;
- (id)_stringValue;
- (id)contact;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handleForIDS;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 handle:(id)arg2;
- (id)initWithContact:(id)arg1 labeledValue:(id)arg2;
- (id)initWithContactHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHandleBlocked;
- (bool)isPhoneNumber;
- (id)labeledValue;
- (void)setContact:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/SiriGeo.framework/SiriGeo

- (id)in_labeledValue;

@end
