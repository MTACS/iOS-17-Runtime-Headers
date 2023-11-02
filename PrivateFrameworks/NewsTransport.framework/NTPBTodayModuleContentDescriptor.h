
@interface NTPBTodayModuleContentDescriptor : PBCodable <NSCopying> {
    NSString * _identifier;
    NTPBTodayModuleContentRequest * _request;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NTPBTodayModuleContentRequest *request;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasRequest;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
