
@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding> {
    NSArray * _accessibilityActionsForRemoteDevice;
    NSAttributedString * _attributedLabel;
    NSArray * _attributedUserInputLabels;
    NSAttributedString * _attributedValue;
    NSArray * _customActionsForRemoteDevice;
    NSData * _elementRefData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInContainerSpace;
    NSString * _identifier;
    bool  _isAccessibleElement;
    NSString * _label;
    UIBezierPath * _path;
    unsigned long long  _traits;
    NSArray * _userInputLabels;
    NSString * _value;
}

@property (nonatomic, retain) NSArray *accessibilityActionsForRemoteDevice;
@property (nonatomic, retain) NSAttributedString *attributedLabel;
@property (nonatomic, retain) NSArray *attributedUserInputLabels;
@property (nonatomic, retain) NSAttributedString *attributedValue;
@property (nonatomic, retain) NSArray *customActionsForRemoteDevice;
@property (nonatomic, retain) NSData *elementRefData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInContainerSpace;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isAccessibleElement;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic) unsigned long long traits;
@property (nonatomic, retain) NSArray *userInputLabels;
@property (nonatomic, retain) NSString *value;

+ (id)_descriptionWithAXElement:(id)arg1;
+ (id)_descriptionWithLocalElement:(id)arg1;
+ (id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityActionsForRemoteDevice;
- (id)attributedLabel;
- (id)attributedUserInputLabels;
- (id)attributedValue;
- (id)convertToAccessibilityElementWithContainer:(id)arg1;
- (id)customActionsForRemoteDevice;
- (id)description;
- (id)elementRefData;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContainerSpace;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessibleElement;
- (id)label;
- (id)path;
- (void)setAccessibilityActionsForRemoteDevice:(id)arg1;
- (void)setAttributedLabel:(id)arg1;
- (void)setAttributedUserInputLabels:(id)arg1;
- (void)setAttributedValue:(id)arg1;
- (void)setCustomActionsForRemoteDevice:(id)arg1;
- (void)setElementRefData:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameInContainerSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsAccessibleElement:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setTraits:(unsigned long long)arg1;
- (void)setUserInputLabels:(id)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)traits;
- (id)userInputLabels;
- (id)value;

@end
