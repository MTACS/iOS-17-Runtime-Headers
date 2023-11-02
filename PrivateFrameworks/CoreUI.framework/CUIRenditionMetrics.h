
@interface CUIRenditionMetrics : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary1BottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary1TopRightMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary2BottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary2TopRightMargin;
    double  _baseline;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentTopRightMargin;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    }  _crmFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _edgeBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _edgeTopRightMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _scale;
}

- (struct CGSize { double x1; double x2; })auxiliary1BottomLeftMargin;
- (struct CGSize { double x1; double x2; })auxiliary1TopRightMargin;
- (struct CGSize { double x1; double x2; })auxiliary2BottomLeftMargin;
- (struct CGSize { double x1; double x2; })auxiliary2TopRightMargin;
- (double)baseline;
- (struct CGSize { double x1; double x2; })contentBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGSize { double x1; double x2; })contentTopRightMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (struct CGSize { double x1; double x2; })edgeBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeRect;
- (struct CGSize { double x1; double x2; })edgeTopRightMargin;
- (bool)hasAlignmentEdgeMargins;
- (bool)hasOpaqueContentBounds;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metricsByMirroringHorizontally;
- (double)scale;
- (bool)scalesHorizontally;
- (bool)scalesVertically;

@end
