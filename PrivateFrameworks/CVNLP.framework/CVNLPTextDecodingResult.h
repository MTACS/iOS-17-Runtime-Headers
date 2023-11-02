
@interface CVNLPTextDecodingResult : NSObject {
    NSArray * _candidates;
}

@property (nonatomic, readonly) NSArray *candidates;

- (void).cxx_destruct;
- (id)candidates;
- (long long)count;
- (id)initWithCandidates:(id)arg1;

@end
