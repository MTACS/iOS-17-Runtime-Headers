
@interface TSDStyleWarmingOperation : NSOperation {
    TSKAccessController * mAccessController;
    int  mProperty;
    TSSStyle * mStyle;
}

- (id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3;
- (void)main;
- (void)warm;

@end
