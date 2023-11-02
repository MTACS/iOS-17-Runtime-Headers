
@interface PXGRectDiagnosticsLayer : CALayer {
    PXGLayout * _layout;
    NSArray * _rectDiagnosticsProviders;
}

@property (nonatomic, retain) PXGLayout *layout;
@property (nonatomic, copy) NSArray *rectDiagnosticsProviders;

+ (id)defaultRectDiagnosticsProviders;

- (void).cxx_destruct;
- (id)layout;
- (id)rectDiagnosticsProviders;
- (void)setLayout:(id)arg1;
- (void)setRectDiagnosticsProviders:(id)arg1;
- (void)update;

@end
