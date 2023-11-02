
@interface W5RapportDiscoveryResponse : NSObject <W5RapportResponse> {
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *results;
@property (readonly) Class superclass;

- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
