
@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSString * _applicationName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _boundsLoaded;
    WFImage * _image;
    NSString * _name;
    int  _processIdentifier;
    NSNumber * _windowIndex;
}

@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool boundsLoaded;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isOnScreen;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, retain) NSNumber *windowIndex;

+ (id)allWindows;
+ (id)allWindowsForBundleIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)boundsLoaded;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isHidden;
- (bool)isOnScreen;
- (id)name;
- (struct CGPoint { double x1; double x2; })position;
- (int)processIdentifier;
- (void)setBoundsLoaded:(bool)arg1;
- (void)setBoundsNeedReloading;
- (void)setWindowIndex:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)wfName;
- (id)windowIndex;

@end
