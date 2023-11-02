
@interface _NSTextAttachmentLayoutInfo : NSObject {
    NSDictionary * _attributes;
    double  _baselineOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _horizontalOffset;
    bool  _isBoundsValid;
    bool  _isLineFragmentLayout;
    _NSTextAttachmentLayoutContext * _layoutContext;
    <NSTextLocation> * _location;
    long long  _locationOffsetFromBase;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _proposedLineFragment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _resolvedAttachmentFrame;
    struct __CTRunDelegate { } * _runDelegate;
    NSTextAttachment * _textAttachment;
    NSTextAttachmentViewProvider * _textAttachmentViewProvider;
    NSTextLayoutFragment * _textLayoutFragment;
}

@property struct CGPoint { double x1; double x2; } attachmentFrameOrigin;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly) _NSTextAttachmentLayoutContext *layoutContext;
@property (readonly) <NSTextLocation> *location;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } resolvedAttachmentFrame;
@property (readonly) struct __CTRunDelegate { }*runDelegate;
@property (readonly) NSTextAttachment *textAttachment;
@property (retain) NSTextAttachmentViewProvider *textAttachmentViewProvider;

- (void)_invalidateLocations;
- (void)_queryLayout;
- (void)_queryLayoutWithHorizontalOffset:(double)arg1;
- (struct CGPoint { double x1; double x2; })attachmentFrameOrigin;
- (id)attributes;
- (void)dealloc;
- (id)initWithContext:(id)arg1 location:(id)arg2 attributes:(id)arg3;
- (void)invalidateAttachmentMeasurements;
- (id)layoutContext;
- (id)location;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resolvedAttachmentFrame;
- (struct __CTRunDelegate { }*)runDelegate;
- (void)setAttachmentFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextAttachmentViewProvider:(id)arg1;
- (id)textAttachment;
- (id)textAttachmentViewProvider;
- (id)textLayoutFragment;

@end
