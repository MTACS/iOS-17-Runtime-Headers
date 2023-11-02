
@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV {
    bool  _isMusic;
    NSDictionary * _methods;
}

@property (nonatomic) bool isMusic;
@property (nonatomic, retain) NSDictionary *methods;

+ (id)streamDataCSV:(bool)arg1;

- (void).cxx_destruct;
- (id)initIsMusic:(bool)arg1;
- (bool)isMusic;
- (bool)matchesMethod:(id)arg1 code:(long long)arg2;
- (id)methods;
- (void)setIsMusic:(bool)arg1;
- (void)setMethods:(id)arg1;
- (id)setUpMethods;
- (int)transformer;
- (bool)validMethod:(long long)arg1;

@end
