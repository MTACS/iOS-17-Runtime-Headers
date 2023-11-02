
@interface VKImageAnalysisInteractionResultInfo : NSObject {
    NSString * _displayLabel;
    NSString * _displayMessage;
    NSString * _domain;
    NSString * _glyphName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedBoundingRect;
}

@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayMessage;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingRect;

- (void).cxx_destruct;
- (id)displayLabel;
- (id)displayMessage;
- (id)domain;
- (id)glyphName;
- (id)initWithDisplayLabel:(id)arg1 displayMessage:(id)arg2 glyphName:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingRect;

@end
