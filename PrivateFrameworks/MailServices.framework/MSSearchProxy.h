
@interface MSSearchProxy : NSObject <MSDSearchResultsProtocol> {
    MSSearch * _search;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MSSearch *search;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)foundResults:(id)arg1 error:(id)arg2;
- (id)initWithSearch:(id)arg1;
- (id)search;
- (void)setSearch:(id)arg1;

@end
