
@interface NWAccumulatedValue : NSObject {
    NWAccumulation * _accumulation;
    id /* block */  _callback;
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, retain) NWAccumulation *accumulation;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic, retain) NSObject *object;

- (void).cxx_destruct;
- (id)accumulation;
- (id /* block */)callback;
- (id)description;
- (id)keyPath;
- (id)object;
- (void)setAccumulation:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;
- (id)snapshot;

@end
