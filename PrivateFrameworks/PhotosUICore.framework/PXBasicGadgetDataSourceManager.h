
@interface PXBasicGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray * _providers;
}

@property (nonatomic, copy) NSArray *providers;

- (void).cxx_destruct;
- (id)gadgetProviders;
- (id)initWithProviders:(id)arg1;
- (id)providers;
- (void)setProviders:(id)arg1;

@end
