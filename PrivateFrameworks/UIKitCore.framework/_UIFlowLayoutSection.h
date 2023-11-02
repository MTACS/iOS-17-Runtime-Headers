
@interface _UIFlowLayoutSection : NSObject {
    double  _actualGap;
    double  _beginMargin;
    double  _endMargin;
    bool  _fixedItemSize;
    double  _footerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _footerFrame;
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
    double  _headerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    long long  _indexOfIncompleteRow;
    double  _interItemSpacing;
    NSMutableSet * _invalidatedIndexPaths;
    bool  _isValid;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSMutableArray * _items;
    long long  _itemsByRowCount;
    long long  _itemsCount;
    double  _lastRowActualGap;
    double  _lastRowBeginMargin;
    double  _lastRowEndMargin;
    bool  _lastRowIncomplete;
    _UIFlowLayoutInfo * _layoutInfo;
    double  _lineSpacing;
    double  _otherMargin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectToKeepValid;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _rows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionMargins;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _validItemRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _validRect;
}

- (void).cxx_destruct;
- (id)init;

@end
