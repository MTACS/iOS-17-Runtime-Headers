
@interface PXGFence : NSObject {
    PXGLayout * _layout;
    double  _timeout;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic) double timeout;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLayout:(id)arg1 type:(unsigned long long)arg2;
- (id)layout;
- (void)setTimeout:(double)arg1;
- (double)timeout;
- (unsigned long long)type;

@end
