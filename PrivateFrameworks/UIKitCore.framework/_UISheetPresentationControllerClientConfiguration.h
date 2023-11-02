
@interface _UISheetPresentationControllerClientConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    bool  _containsFirstResponder;
    bool  _firstResponderRequiresKeyboard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    double  _proposedDepthLevel;
}

@property (nonatomic) bool containsFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstResponderRequiresKeyboard;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) double proposedDepthLevel;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (bool)containsFirstResponder;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)firstResponderRequiresKeyboard;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (double)proposedDepthLevel;
- (void)setContainsFirstResponder:(bool)arg1;
- (void)setFirstResponderRequiresKeyboard:(bool)arg1;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProposedDepthLevel:(double)arg1;

@end
