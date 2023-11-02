
@interface GKWelcomeBannerVisibility : NSObject {
    bool  _isShowingRemoteUI;
}

@property (nonatomic) bool isShowingRemoteUI;

+ (id)shared;

- (bool)isShowingRemoteUI;
- (void)setIsShowingRemoteUI:(bool)arg1;

@end
