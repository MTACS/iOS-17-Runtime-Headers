
@interface NMAPIRecentRadioStationsRequest : NMAPIRequest {
    unsigned long long  _limit;
}

@property (nonatomic) unsigned long long limit;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)limit;
- (Class)responseParserClass;
- (void)setLimit:(unsigned long long)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
