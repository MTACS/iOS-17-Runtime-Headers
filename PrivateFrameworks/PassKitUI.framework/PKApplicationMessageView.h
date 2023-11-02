
@interface PKApplicationMessageView : UIControl <PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView> {
    CAFilter * _blurFilter;
    NSMutableArray * _children;
    PKApplicationMessageViewConfiguration * _configuration;
    PKApplicationMessageNode * _content;
    <PKApplicationMessageViewDelegate> * _delegate;
    unsigned long long  _depth;
    UIButton * _dismissButton;
    bool  _dismissable;
    bool  _enabled;
    struct CGColor { } * _filterColor;
    double  _filterRadius;
    bool  _hasPrecedingMessageView;
    CAFilter * _highlightFilter;
    bool  _highlighted;
    bool  _inLayout;
    bool  _inTreeLayout;
    bool  _invalidated;
    int  _layoutMode;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutStateBounds;
    bool  _layoutStateDirty;
    PKApplicationMessage * _message;
    PKApplicationMessageContentView * _messageView;
    double  _messageViewHeightRestriction;
    int  _messageViewPresentationLayoutMode;
    bool  _messageViewPresented;
    struct CGSize { 
        double width; 
        double height; 
    }  _messageViewSize;
    PKApplicationMessageView * _parent;
    bool  _reloadQueued;
    bool  _reloadQueuedIsRoot;
    NSMutableArray * _removedSubviews;
    NSMutableArray * _removedVisualSubviews;
    bool  _selected;
    NSMutableArray * _stagedRemovedSubviews;
    <PKPGSVSectionSubheaderDelegate> * _subheaderDelegate;
    struct { 
        bool userExpandedBelow; 
        bool hasMessageViewBelow; 
        bool hasPrecedingMessageView; 
        bool allPresentedAbove; 
        bool presented; 
        int presentationLayoutMode; 
    }  _treeLayoutState;
    long long  _type;
    bool  _visited;
}

@property (nonatomic, readonly) PKApplicationMessageViewConfiguration *configuration;
@property (nonatomic, readonly) PKApplicationMessageNode *content;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKApplicationMessageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_tapped:(id)arg1;
- (void)applicationMessageContentViewDismissTapped:(id)arg1;
- (void)collapse;
- (id)configuration;
- (id)content;
- (void)dealloc;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (bool)needsRemoval;
- (long long)scrollType;
- (void)setContent:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubheaderDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
