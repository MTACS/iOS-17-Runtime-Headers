
@interface COMTTypedAction : COMTAction {
    NSString * _targetType;
}

@property (nonatomic, readonly) NSString *targetType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)targetType;

@end
