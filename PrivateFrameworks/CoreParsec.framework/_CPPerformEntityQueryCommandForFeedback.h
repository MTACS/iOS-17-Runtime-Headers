
@interface _CPPerformEntityQueryCommandForFeedback : PBCodable <NSSecureCoding, _CPPerformEntityQueryCommandForFeedback> {
    int  _entityType;
    NSString * _tokenString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tokenString;

- (void).cxx_destruct;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setTokenString:(id)arg1;
- (id)tokenString;
- (void)writeTo:(id)arg1;

@end
