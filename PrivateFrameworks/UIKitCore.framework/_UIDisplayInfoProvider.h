
@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding> {
    unsigned long long  artworkSubtype;
    FBSDisplayConfiguration * displayConfiguration;
    <_UIDisplayInfoShape> * exclusionArea;
    double  homeAffordanceOverlayAllowance;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  peripheryInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  safeAreaInsetsLandscapeLeft;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  safeAreaInsetsLandscapeRight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  safeAreaInsetsPortrait;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  safeAreaInsetsPortraitUpsideDown;
    double  systemMinimumMargin;
}

@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) <_UIDisplayInfoShape> *exclusionArea;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double systemMinimumMargin;

- (void).cxx_destruct;
- (unsigned long long)artworkSubtype;
- (id)displayConfiguration;
- (id)exclusionArea;
- (double)homeAffordanceOverlayAllowance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (double)systemMinimumMargin;

@end
