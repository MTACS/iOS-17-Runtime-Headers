
@interface TMLJSValueProxy : NSObject <TMLJSValueProxy> {
    NSString * _keyPath;
    id  _target;
}

@property (nonatomic, retain) id _;

- (void).cxx_destruct;
- (id)_;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2;
- (void)set_:(id)arg1;

@end
