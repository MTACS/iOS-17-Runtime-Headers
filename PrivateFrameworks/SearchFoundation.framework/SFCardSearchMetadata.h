
@interface SFCardSearchMetadata : NSObject <NSCopying, NSSecureCoding, SFCardSearchMetadata> {
    struct { 
        unsigned int isServerEntity : 1; 
        unsigned int isFederatedDomainSearch : 1; 
    }  _has;
    bool  _isFederatedDomainSearch;
    bool  _isServerEntity;
    NSString * _searchQuery;
    NSString * _viewConfigName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFederatedDomainSearch;
@property (nonatomic) bool isServerEntity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewConfigName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsFederatedDomainSearch;
- (bool)hasIsServerEntity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFederatedDomainSearch;
- (bool)isServerEntity;
- (id)jsonData;
- (id)searchQuery;
- (void)setIsFederatedDomainSearch:(bool)arg1;
- (void)setIsServerEntity:(bool)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)viewConfigName;

@end
