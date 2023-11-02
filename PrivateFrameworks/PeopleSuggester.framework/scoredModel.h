
@interface scoredModel : NSObject {
    NSString * _modelKey;
    double  _score;
}

@property (nonatomic, retain) NSString *modelKey;
@property double score;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithModelKey:(id)arg1 score:(double)arg2;
- (id)modelKey;
- (double)score;
- (void)setModelKey:(id)arg1;
- (void)setScore:(double)arg1;

@end
