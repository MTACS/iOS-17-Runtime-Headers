
@interface PXGDecorationViewPayload : PXGViewPayload {
    long long  _decorationOptions;
}

@property (nonatomic, readonly) long long decorationOptions;

- (long long)decorationOptions;
- (unsigned long long)hash;
- (id)initWithDecorationOptions:(unsigned long long)arg1 viewClass:(Class)arg2 userData:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
