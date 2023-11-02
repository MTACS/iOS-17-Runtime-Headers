
@interface SFEntitySearchMetadata : NSObject <NSCopying, NSSecureCoding, SFEntitySearchMetadata> {
    NSString * _entityIdentifier;
    NSString * _entitySearchQuery;
    NSString * _tokenQuery;
    NSString * _viewConfigName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, copy) NSString *entitySearchQuery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tokenQuery;
@property (nonatomic, copy) NSString *viewConfigName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entitySearchQuery;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntitySearchQuery:(id)arg1;
- (void)setTokenQuery:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)tokenQuery;
- (id)viewConfigName;

@end
