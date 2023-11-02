
@interface IEDialogResponse : IEResponse {
    NSString * _catId;
    NSDictionary * _catParameters;
    NSString * _patternId;
    NSDictionary * _patternParameters;
    NSString * _text;
    NSDictionary * _visualParameters;
}

@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) NSDictionary *catParameters;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic, retain) NSDictionary *patternParameters;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSDictionary *visualParameters;

- (void).cxx_destruct;
- (id)catId;
- (id)catParameters;
- (id)patternId;
- (id)patternParameters;
- (void)setCatId:(id)arg1;
- (void)setCatParameters:(id)arg1;
- (void)setPatternId:(id)arg1;
- (void)setPatternParameters:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVisualParameters:(id)arg1;
- (id)text;
- (id)visualParameters;

@end
