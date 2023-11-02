
@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord {
    NSString * _currentLayoutMethodName;
    UIView * _currentLayoutView;
    NSString * _geometricPropertyName;
    NSValue * _geometricPropertyValue;
}

@property (nonatomic, readonly) NSString *currentLayoutMethodName;
@property (nonatomic, readonly) UIView *currentLayoutView;
@property (nonatomic, readonly) NSString *geometricPropertyName;
@property (nonatomic, readonly) NSValue *geometricPropertyValue;

- (void).cxx_destruct;
- (id)currentLayoutMethodName;
- (id)currentLayoutView;
- (id)description;
- (id)geometricPropertyName;
- (id)geometricPropertyValue;
- (id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4;

@end
