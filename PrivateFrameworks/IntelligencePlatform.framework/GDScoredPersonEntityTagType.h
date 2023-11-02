
@interface GDScoredPersonEntityTagType : NSObject {
    GDScoredPersonEntityTagInner * inner;
}

@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) long long tag;

- (void).cxx_destruct;
- (id)initWithTag:(long long)arg1 score:(double)arg2;
- (double)score;
- (long long)tag;

@end
