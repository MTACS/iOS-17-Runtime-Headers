
@interface WFOnScreenContentExtractor : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _applicationFrame;
    long long  _applicationLevel;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic) long long applicationLevel;

- (id)activityItemsConfigurationFromScene:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrameForScene:(id)arg1;
- (long long)applicationLevel;
- (void)handleAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadActivityItemsConfigurationItemsForScene:(id)arg1 serviceOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)nodeWithItem:(id)arg1 file:(id)arg2;
- (id)responseWithError:(id)arg1;
- (void)setApplicationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setApplicationLevel:(long long)arg1;

@end
