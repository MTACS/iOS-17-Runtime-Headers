
@interface _UIResponder_Override : NSObject {
    UIResponder * _owner;
    UIResponder * _target;
    long long  _types;
}

@property (nonatomic, readonly) UIResponder *owner;
@property (nonatomic, readonly) UIResponder *target;
@property (nonatomic, readonly) long long types;

+ (id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)owner;
- (id)target;
- (long long)types;

@end
