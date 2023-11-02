
@interface PLSearchOCRTextLineCandidate : NSObject {
    double  _confidence;
    NSString * _line;
    NSArray * _words;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *line;
@property (nonatomic, readonly) NSArray *words;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (id)initWithLine:(id)arg1 words:(id)arg2 confidence:(double)arg3;
- (id)line;
- (id)words;

@end
