
@interface VIFaissSearchResult : NSObject <NSCopying> {
    float  _distance;
    NSArray * _embedding;
    long long  _identifier;
    NSArray * _residual;
}

@property (nonatomic) float distance;
@property (nonatomic, copy) NSArray *embedding;
@property (nonatomic) long long identifier;
@property (nonatomic, copy) NSArray *residual;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)distance;
- (id)embedding;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 distance:(float)arg2 embedding:(id)arg3 residual:(id)arg4;
- (bool)isValid;
- (id)residual;
- (void)setDistance:(float)arg1;
- (void)setEmbedding:(id)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setResidual:(id)arg1;

@end
