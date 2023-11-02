
@interface CHTextInputQuery : CHQuery {
    NSArray * _availableItems;
    <CHTextInputQueryTargetDataSource> * _textInputTargetsDataSource;
    double  _totalDuration;
}

@property (nonatomic, readonly, copy) NSArray *availableItems;
@property <CHTextInputQueryTargetDataSource> *textInputTargetsDataSource;
@property (nonatomic, readonly) double totalDuration;

+ (id)queryItemStableIdentifierForStrokeGroup:(id)arg1;

- (void).cxx_destruct;
- (id)availableItems;
- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (void)setTextInputTargetsDataSource:(id)arg1;
- (id)textInputTargetsDataSource;
- (double)totalDuration;

@end
