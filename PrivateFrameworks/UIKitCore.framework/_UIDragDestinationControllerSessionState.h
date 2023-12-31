
@interface _UIDragDestinationControllerSessionState : NSObject {
    <UIDropSession> * _dropSession;
    int  _state;
}

@property (nonatomic, retain) <UIDropSession> *dropSession;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) bool isReordering;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (id)description;
- (id)dropSession;
- (bool)isActive;
- (bool)isDragging;
- (bool)isReordering;
- (void)setDropSession:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
