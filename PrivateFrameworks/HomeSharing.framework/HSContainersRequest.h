
@interface HSContainersRequest : HSRequest {
    bool  _shouldParseResponse;
}

@property (nonatomic) bool shouldParseResponse;

+ (id)requestWithDatabaseID:(unsigned int)arg1;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (void)setShouldParseResponse:(bool)arg1;
- (bool)shouldParseResponse;

@end
