
@interface PKSharingMesageProprietaryData : NSObject {
    long long  _accessType;
    NSArray * _displayableSharedEntitlements;
}

@property (nonatomic) long long accessType;
@property (nonatomic, retain) NSArray *displayableSharedEntitlements;

- (void).cxx_destruct;
- (long long)accessType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayableSharedEntitlements;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAccessType:(long long)arg1;
- (void)setDisplayableSharedEntitlements:(id)arg1;

@end
