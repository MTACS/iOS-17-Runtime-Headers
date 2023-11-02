
@interface PKDetectionQuery : PKQuery <CHQueryDelegate> {
    CHQuery * _query;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CHQuery *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (id)query;
- (void)queryDidUpdateResult:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)start;
- (void)teardown;

@end
