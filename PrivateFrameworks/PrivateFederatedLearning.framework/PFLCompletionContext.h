
@interface PFLCompletionContext : NSObject {
    NSError * _error;
    NSData * _privatizedDiffs;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSData *privatizedDiffs;

- (void).cxx_destruct;
- (id)error;
- (id)initWithPrivatizedDiffs:(id)arg1 error:(id)arg2;
- (id)privatizedDiffs;

@end
