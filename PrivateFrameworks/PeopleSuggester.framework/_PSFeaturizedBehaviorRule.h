
@interface _PSFeaturizedBehaviorRule : NSObject {
    NSMutableDictionary * _features;
    BMRule * _rule;
    double  _score;
}

@property (nonatomic, retain) NSMutableDictionary *features;
@property (nonatomic, retain) BMRule *rule;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)features;
- (id)initWithRule:(id)arg1 score:(double)arg2 features:(id)arg3;
- (id)rule;
- (double)score;
- (void)setFeatures:(id)arg1;
- (void)setRule:(id)arg1;
- (void)setScore:(double)arg1;

@end
