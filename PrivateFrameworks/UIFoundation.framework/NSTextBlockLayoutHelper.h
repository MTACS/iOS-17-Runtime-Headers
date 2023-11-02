
@interface NSTextBlockLayoutHelper : NSObject {
    double  _bBorder;
    double  _bMargin;
    double  _bPadding;
    NSTextTableBlock * _block;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    double  _height;
    double  _lBorder;
    double  _lMargin;
    double  _lPadding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutRect;
    double  _rBorder;
    double  _rMargin;
    double  _rPadding;
    double  _tBorder;
    double  _tMargin;
    double  _tPadding;
    double  _width;
}

- (void)dealloc;
- (id)description;

@end
