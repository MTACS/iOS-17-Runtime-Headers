
@interface MUImpressionElement : NSObject {
    NSObject * _customData;
    NSString * _debugString;
    NSUUID * _elementIdentifier;
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
    NSUUID * _sessionIdentifier;
    double  _visibilityThreshold;
}

@property (nonatomic, retain) NSObject *customData;
@property (nonatomic, copy) NSString *debugString;
@property (nonatomic, readonly) NSUUID *elementIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) double visibilityThreshold;

- (void).cxx_destruct;
- (id)customData;
- (id)debugString;
- (id)elementIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithElementIdentifier:(id)arg1 visibilityThreshold:(double)arg2;
- (id)sessionIdentifier;
- (void)setCustomData:(id)arg1;
- (void)setDebugString:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSessionIdentifier:(id)arg1;
- (double)visibilityThreshold;

@end
