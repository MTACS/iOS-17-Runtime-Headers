
@interface AVInfoTabCoordinator : NSObject {
    void actions;
    void infoTabViewController;
    void playerItem;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) UIViewController *infoTabViewController;
@property (nonatomic, retain) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (id)actions;
- (id)infoTabViewController;
- (id)init;
- (id)initWithPlayerItem:(id)arg1 actions:(id)arg2;
- (id)playerItem;
- (void)setActions:(id)arg1;
- (void)setInfoTabViewController:(id)arg1;
- (void)setPlayerItem:(id)arg1;

@end
