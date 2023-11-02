
@interface EKUIRightClickEmptySpaceInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction> {
    <EKUIRightClickEmptySpaceInteractionDelegate> * _delegate;
    UIContextMenuInteraction * _interaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKUIRightClickEmptySpaceInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIContextMenuInteraction *interaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)localizedPasteStringForEventCount:(unsigned long long)arg1 includeHere:(bool)arg2;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)interaction;
- (void)setDelegate:(id)arg1;
- (void)setInteraction:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
