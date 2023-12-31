
@interface _UIResponder_Override_Host : NSObject {
    NSMutableArray * _overrides;
    UIResponder * _owner;
}

@property (nonatomic, readonly) UIResponder *owner;

+ (id)hostForResponder:(id)arg1;

- (void).cxx_destruct;
- (void)attachOverrider:(id)arg1 forTypes:(long long)arg2;
- (void)dealloc;
- (id)description;
- (void)detachOverrider:(id)arg1 forTypes:(long long)arg2;
- (id)init;
- (id)owner;
- (long long)typesForResponder:(id)arg1;

@end
