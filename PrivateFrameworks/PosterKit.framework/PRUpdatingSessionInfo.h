
@interface PRUpdatingSessionInfo : NSObject {
    PRSPosterUpdateSessionInfo * _info;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)identifier;
- (id)shortcutsWallpaperConfiguration;
- (id)userInfo;

@end
