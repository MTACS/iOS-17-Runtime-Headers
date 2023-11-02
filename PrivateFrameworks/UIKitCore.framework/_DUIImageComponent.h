
@interface _DUIImageComponent : NSObject <NSSecureCoding> {
    unsigned int  _contextID;
    bool  _hidesImage;
    bool  _ignoresAccessibilityFilters;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    unsigned long long  _renderID;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned int  _slotID;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool hidesImage;
@property (nonatomic) bool ignoresAccessibilityFilters;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic, readonly) bool representsPortal;
@property (nonatomic) unsigned int slotID;

+ (bool)supportsSecureCoding;

- (void)_configurePortalLayer:(id)arg1;
- (unsigned int)contextID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (bool)hidesImage;
- (bool)ignoresAccessibilityFilters;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)portalView;
- (unsigned long long)renderID;
- (bool)representsPortal;
- (void)setContextID:(unsigned int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidesImage:(bool)arg1;
- (void)setIgnoresAccessibilityFilters:(bool)arg1;
- (void)setRenderID:(unsigned long long)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;

@end
