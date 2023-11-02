
@interface WFObservableObjectResult : WFObservableResult {
    WFDatabaseObjectDescriptor * _descriptor;
    WFDatabaseObjectDescriptor * _value;
}

@property (nonatomic, readonly) WFDatabaseObjectDescriptor *descriptor;
@property (nonatomic, readonly) WFDatabaseObjectDescriptor *value;

+ (void)getResultWithDescriptor:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
+ (id)getResultWithDescriptor:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (void)handleChangeNotification:(id)arg1;
- (id)initWithValueType:(Class)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2 initialValue:(id)arg3 descriptor:(id)arg4;
- (id)value;

@end
