
@interface ICTableCellAccessibilityElement : UIAccessibilityElement <ICAccessibilityRotorSearchElement, UIAccessibilityContainerDataTableCell> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    NSUUID * _columnID;
    NSUUID * _rowID;
    ICTableAccessibilityController * _tableAXController;
}

@property (nonatomic, readonly) NSAttributedString *attributedContentString;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) NSUUID *columnID;
@property (nonatomic, readonly) unsigned long long columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInScreenSpace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditing;
@property (nonatomic, readonly) NSUUID *rowID;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedRotorTypes;
@property (nonatomic) ICTableAccessibilityController *tableAXController;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeInNote;

- (void).cxx_destruct;
- (id)_accessibilityTextInputElement;
- (id)_accessibilityTextViewTextOperationResponder;
- (bool)accessibilityActivate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (id)accessibilityContainer;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (bool)addColumnAfter;
- (bool)addRowBelow;
- (id)attributedContentString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)columnID;
- (unsigned long long)columnIndex;
- (bool)deleteColumn;
- (bool)deleteRow;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInScreenSpace;
- (id)initWithTableAccessibilityController:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (bool)isAccessibilityElement;
- (bool)isEditing;
- (void)moveFocusToFirstSelectedCell;
- (id)noteEditorController;
- (void)reverseTableDirection;
- (id)rowID;
- (unsigned long long)rowIndex;
- (bool)selectCellRange;
- (bool)selectCurrentColumn;
- (bool)selectCurrentRow;
- (bool)selectTable;
- (void)setTableAXController:(id)arg1;
- (id)supportedRotorTypes;
- (id)tableAXController;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeInNote;

@end
