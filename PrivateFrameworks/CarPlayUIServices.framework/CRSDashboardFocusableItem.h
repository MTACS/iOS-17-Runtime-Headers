
@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding> {
    UIView<CRSUIDashboardFocusableItemProviding> * _focusProvidingItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInWindow;
    NSUUID * _identifier;
}

@property (nonatomic) UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic, retain) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)focusProvidingItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusableView:(id)arg1;
- (void)setFocusProvidingItem:(id)arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;

@end
