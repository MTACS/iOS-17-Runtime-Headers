
@interface CLSLocation : CLSObject <CLSContactsSearchable> {
    bool  _isEditable;
    NSString * _locationName;
    NSString * _searchText;
    long long  _sourceType;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property bool isEditable;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) long long sourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationID:(id)arg1 name:(id)arg2;
- (bool)isEditable;
- (id)locationName;
- (id)searchText;
- (void)setIsEditable:(bool)arg1;
- (void)setLocationName:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (long long)sourceType;

@end
