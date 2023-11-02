
@interface SFCardMetadata : NSObject <NSCopying, NSSecureCoding, SFCardMetadata> {
    struct { 
        unsigned int isServerEntity : 1; 
    }  _has;
    bool  _isServerEntity;
    NSString * _queryToSearchAcrossAllDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isServerEntity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *queryToSearchAcrossAllDomains;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsServerEntity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isServerEntity;
- (id)jsonData;
- (id)queryToSearchAcrossAllDomains;
- (void)setIsServerEntity:(bool)arg1;
- (void)setQueryToSearchAcrossAllDomains:(id)arg1;

@end
