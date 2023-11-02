
@interface CLSClass : CLSObject <CLSContactsSearchable, CLSRelationable, CRKClassKitClass> {
    NSString * _className;
    NSString * _customClassName;
    NSString * _iconID;
    bool  _isEditable;
    NSString * _locationID;
    long long  _originatingSource;
    NSString * _searchText;
    long long  _source;
    NSString * _tempObjectID;
}

@property (nonatomic, readonly) NSArray *classMembers;
@property (nonatomic, copy) NSString *className;
@property (nonatomic, readonly, copy) NSString *className;
@property (nonatomic, copy) NSString *customClassName;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iconID;
@property bool isEditable;
@property (nonatomic, copy) NSString *locationID;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) NSString *objectID;
@property (nonatomic) long long originatingSource;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) long long source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tempObjectID;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addPerson:(id)arg1 withRole:(unsigned long long)arg2;
- (id)classMembers;
- (id)className;
- (id)customClassName;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)iconID;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 customName:(id)arg2;
- (bool)isEditable;
- (id)locationID;
- (void)mergeWithObject:(id)arg1;
- (long long)originatingSource;
- (void)removePerson:(id)arg1 withRole:(unsigned long long)arg2;
- (id)searchText;
- (void)setClassName:(id)arg1;
- (void)setCustomClassName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIconID:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setLocationID:(id)arg1;
- (void)setOriginatingSource:(long long)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setTempObjectID:(id)arg1;
- (long long)source;
- (id)tempObjectID;
- (bool)validateObject:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (bool)isEditable;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (void)acceptVisitor:(id)arg1;

@end
