
@interface StocksUI.LinkActionActivityProvider : NSObject <SXActionActivityProvider> {
    void commandCenter;
    void handler;
    void linkedContentProvider;
    void qualifier;
    void router;
    void watchlistManager;
}

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)init;
- (id)previewActivityForAction:(id)arg1;

@end
