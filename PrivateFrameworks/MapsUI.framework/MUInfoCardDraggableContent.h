
@interface MUInfoCardDraggableContent : NSObject {
    int  _analyticsTarget;
    <NSItemProviderWriting> * _draggableContent;
    bool  _header;
    UIView * _view;
}

@property (nonatomic) int analyticsTarget;
@property (nonatomic, retain) <NSItemProviderWriting> *draggableContent;
@property (getter=isHeader, nonatomic) bool header;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (int)analyticsTarget;
- (id)draggableContent;
- (bool)isHeader;
- (void)setAnalyticsTarget:(int)arg1;
- (void)setDraggableContent:(id)arg1;
- (void)setHeader:(bool)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
