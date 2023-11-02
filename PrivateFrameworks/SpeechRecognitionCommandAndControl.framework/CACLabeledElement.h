
@interface CACLabeledElement : NSObject <AXElementNamesItem, CACLabeledGridOverlayViewElement, CACNumberedElement, CACVoiceOverDescribable> {
    long long  _arrowOrientation;
    NSString * _axIdentifier;
    long long  _badgeIndicatorMask;
    long long  _badgePresentation;
    unsigned int  _displayID;
    AXElement * _element;
    bool  _hasBeenCollected;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _interfaceRectangle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _labelRectangle;
    NSString * _numberedLabel;
    NSArray * _recognitionStrings;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectangle;
    CACTextMarkerRange * _textMarkerRange;
}

@property (nonatomic) long long arrowOrientation;
@property (nonatomic, retain) NSString *axIdentifier;
@property (nonatomic) long long badgeIndicatorMask;
@property (nonatomic) long long badgePresentation;
@property (nonatomic) unsigned int displayID;
@property (nonatomic, retain) AXElement *element;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } elementLabelContainerSize;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) NSString *fullLabel;
@property (nonatomic) bool hasBeenCollected;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } interfaceOrientedRectangle;
@property (nonatomic, readonly) bool isSpacer;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelRectangle;
@property (nonatomic, readonly) NSString *numberedLabel;
@property (nonatomic, retain) NSString *numberedLabel;
@property (nonatomic, readonly) NSString *recognitionLabel;
@property (nonatomic, retain) NSArray *recognitionStrings;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property (nonatomic, retain) CACTextMarkerRange *textMarkerRange;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *unfilteredRecognitionLabel;
@property (nonatomic, readonly) NSString *valueLabel;

- (void).cxx_destruct;
- (long long)arrowOrientation;
- (id)axIdentifier;
- (long long)badgeIndicatorMask;
- (long long)badgePresentation;
- (id)description;
- (unsigned int)displayID;
- (id)element;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementFrame;
- (struct CGSize { double x1; double x2; })elementLabelContainerSize;
- (id)elementName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)fullLabel;
- (bool)hasBeenCollected;
- (id)initWithElement:(id)arg1 recognitionStrings:(id)arg2 rectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interfaceOrientedRectangle;
- (bool)isSpacer;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectangle;
- (id)numberedLabel;
- (struct CGPoint { double x1; double x2; })quantizedPosition;
- (long long)quantizedPositionCompare:(id)arg1;
- (id)recognitionLabel;
- (id)recognitionStrings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (void)setArrowOrientation:(long long)arg1;
- (void)setAxIdentifier:(id)arg1;
- (void)setBadgeIndicatorMask:(long long)arg1;
- (void)setBadgePresentation:(long long)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setElement:(id)arg1;
- (void)setHasBeenCollected:(bool)arg1;
- (void)setLabelRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberedLabel:(id)arg1;
- (void)setRecognitionStrings:(id)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextMarkerRange:(id)arg1;
- (id)textMarkerRange;
- (unsigned long long)traits;
- (id)unfilteredRecognitionLabel;
- (id)valueLabel;

@end
