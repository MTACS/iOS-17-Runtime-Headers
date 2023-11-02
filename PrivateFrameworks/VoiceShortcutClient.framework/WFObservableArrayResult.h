
@interface WFObservableArrayResult : WFObservableResult {
    WFResultQuery * _query;
    WFDatabaseResultState * _resultState;
    NSArray * _values;
}

@property (nonatomic, readonly) WFResultQuery *query;
@property (nonatomic, readonly) WFDatabaseResultState *resultState;
@property (nonatomic, readonly) NSArray *values;

+ (id)getEmptyResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
+ (id)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
+ (void)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 roundedIcon:(bool)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)description;
- (void)handleChangeNotification:(id)arg1;
- (id)initWithValueType:(Class)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2 initialValues:(id)arg3 query:(id)arg4 resultState:(id)arg5;
- (id)query;
- (id)resultState;
- (id)values;

@end
