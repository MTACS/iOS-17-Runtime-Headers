
@interface FBSDisplayConfigurationBuilder : NSObject <EXBDisplayConfigurationBuilding> {
    FBSDisplayConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lock_bounds;
    bool  _lock_cloningSet;
    bool  _lock_cloningSupported;
    FBSDisplayMode * _lock_currentMode;
    bool  _lock_geometrySet;
    bool  _lock_mainLike;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lock_nativeBounds;
    NSSet * _lock_otherModes;
    long long  _lock_overscanCompensation;
    bool  _lock_overscanSet;
    bool  _lock_overscanned;
    struct CGSize { 
        double width; 
        double height; 
    }  _lock_pixelSize;
    FBSDisplayMode * _lock_preferredMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _lock_safeOverscanRatio;
    bool  _lock_secure;
    NSString * _lock_uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_sanitizedModeForMode:(id)arg1;
- (id)buildConfigurationWithError:(out id*)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)setCloningNotSupported;
- (void)setCloningSupported:(bool)arg1;
- (void)setCurrentMode:(id)arg1 preferredMode:(id)arg2 otherModes:(id)arg3;
- (void)setExpectsSecureRendering;
- (void)setOverscanned:(bool)arg1 compensation:(long long)arg2 safeRatio:(struct CGSize { double x1; double x2; })arg3;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 nativeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setUIKitMainLike;
- (void)setUniqueIdentifier:(id)arg1;

@end
