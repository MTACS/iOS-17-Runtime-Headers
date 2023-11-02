
@interface UISceneSizeRestrictions : NSObject {
    bool  _allowsFullScreen;
    bool  _hasAutomaticMaximumSize;
    bool  _hasAutomaticMinimumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    UIWindowScene * _scene;
}

@property (nonatomic) bool allowsFullScreen;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithScene:(id)arg1;
- (bool)allowsFullScreen;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (void)setAllowsFullScreen:(bool)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;

@end
