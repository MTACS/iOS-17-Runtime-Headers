
@interface ICAMSBagValuePromise : AMSPromise {
    NSString * _bagKey;
    unsigned long long  _bagValueType;
}

@property (nonatomic, readonly, copy) NSString *bagKey;
@property (nonatomic, readonly) unsigned long long bagValueType;

- (void).cxx_destruct;
- (id)bagKey;
- (unsigned long long)bagValueType;
- (id)initWithBagKey:(id)arg1 bagValueType:(unsigned long long)arg2;

@end
