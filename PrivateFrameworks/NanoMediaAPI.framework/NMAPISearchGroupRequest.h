
@interface NMAPISearchGroupRequest : NMAPIURLRequest {
    unsigned long long  _resultsPerSection;
}

@property (nonatomic) unsigned long long resultsPerSection;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)responseParserClass;
- (unsigned long long)resultsPerSection;
- (void)setResultsPerSection:(unsigned long long)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
