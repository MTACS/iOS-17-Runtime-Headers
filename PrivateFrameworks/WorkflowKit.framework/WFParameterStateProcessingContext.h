
@interface WFParameterStateProcessingContext : NSObject {
    WFContentAttributionTracker * _contentAttributionTracker;
    long long  _environment;
    bool  _isInputParameter;
    long long  _maximumItemCount;
    WFParameter * _parameter;
    <WFVariableDataSource> * _variableSource;
    NSString * _widgetSizeClass;
}

@property (nonatomic, readonly) WFContentAttributionTracker *contentAttributionTracker;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) bool isInputParameter;
@property (nonatomic, readonly) long long maximumItemCount;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) <WFVariableDataSource> *variableSource;
@property (nonatomic, readonly) NSString *widgetSizeClass;

- (void).cxx_destruct;
- (void)addContentAttributionSet:(id)arg1;
- (id)contentAttributionTracker;
- (long long)environment;
- (id)initWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(bool)arg3 environment:(long long)arg4 contentAttributionTracker:(id)arg5 widgetSizeClass:(id)arg6;
- (bool)isInputParameter;
- (long long)maximumItemCount;
- (id)parameter;
- (id)variableSource;
- (id)widgetSizeClass;

@end
