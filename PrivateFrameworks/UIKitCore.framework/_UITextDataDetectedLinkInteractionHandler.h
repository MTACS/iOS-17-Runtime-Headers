
@interface _UITextDataDetectedLinkInteractionHandler : _UITextLinkInteractionHandler {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;

- (id)_dataDetectorsRevealControllerAction;
- (id)_defaultContextMenuConfiguration;
- (id)_defaultDataDetectorsPrimaryAction;
- (id)_defaultPrimaryActionForInteractableItem;
- (bool)_useDataDetectorsContextMenuConfiguration;
- (id)initWithItem:(id)arg1 textContentView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;

@end
