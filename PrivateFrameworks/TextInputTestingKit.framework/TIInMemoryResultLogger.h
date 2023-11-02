
@interface TIInMemoryResultLogger : NSObject <TIAutocorrectionResultLogging> {
    NSMutableArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)allResults;
- (id)init;
- (id)results;

@end
