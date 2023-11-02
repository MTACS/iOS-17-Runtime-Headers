
@interface _UICollectionViewDragSourceControllerSessionState : NSObject {
    <UIDragSession> * _dragSession;
}

@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, readonly) bool isActive;

- (void).cxx_destruct;
- (id)description;
- (id)dragSession;
- (bool)isActive;
- (void)setDragSession:(id)arg1;

@end
