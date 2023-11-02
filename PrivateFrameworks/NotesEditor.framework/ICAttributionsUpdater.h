
@interface ICAttributionsUpdater : NSObject {
    void filter;
    void isSidebarHidden;
    void layoutManager;
}

@property (nonatomic) bool isSidebarHidden;
@property (nonatomic, readonly) ICAttributionLayoutManager *layoutManager;

+ (double)sidebarClosedRenderDelay;
+ (double)sidebarOpenedRenderDelay;

- (void).cxx_destruct;
- (id)init;
- (bool)isSidebarHidden;
- (id)layoutManager;
- (void)setIsSidebarHidden:(bool)arg1;

@end
