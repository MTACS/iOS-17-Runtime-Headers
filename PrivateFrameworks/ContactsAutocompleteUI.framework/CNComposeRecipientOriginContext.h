
@interface CNComposeRecipientOriginContext : NSObject {
    unsigned long long  _resultType;
    NSString * _searchTerm;
}

@property (nonatomic) unsigned long long resultType;
@property (nonatomic, retain) NSString *searchTerm;

- (void).cxx_destruct;
- (unsigned long long)resultType;
- (id)searchTerm;
- (void)setResultType:(unsigned long long)arg1;
- (void)setSearchTerm:(id)arg1;

@end
