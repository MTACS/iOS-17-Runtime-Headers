
@interface GDScoredPersonEntity : NSObject {
    GDScoredPersonInner * inner;
}

@property (nonatomic, readonly) long long idValue;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (long long)idValue;
- (id)initWithIDValue:(long long)arg1 score:(double)arg2;
- (double)score;

@end
