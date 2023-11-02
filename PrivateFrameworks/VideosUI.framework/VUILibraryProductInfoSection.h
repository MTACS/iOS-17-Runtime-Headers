
@interface VUILibraryProductInfoSection : NSObject {
    NSArray * _dataViews;
    NSString * _groupName;
    UIView * _headerContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerPadding;
    double  _lineSpacing;
}

@property (nonatomic, copy) NSArray *dataViews;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) UIView *headerContentView;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerPadding;
@property (nonatomic) double lineSpacing;

+ (id)dataViewWithString:(id)arg1;
+ (id)headerViewWithString:(id)arg1;

- (void).cxx_destruct;
- (id)dataViews;
- (id)groupName;
- (id)headerContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerPadding;
- (double)lineSpacing;
- (void)setDataViews:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHeaderContentView:(id)arg1;
- (void)setHeaderPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineSpacing:(double)arg1;

@end
