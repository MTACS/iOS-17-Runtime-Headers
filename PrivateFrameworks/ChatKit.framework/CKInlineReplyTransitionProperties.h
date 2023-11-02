
@interface CKInlineReplyTransitionProperties : NSObject {
    NSArray * _associatedChatItemGUIDs;
    NSArray * _chatItemGUIDs;
    double  _initialBalloonOffsetX;
    struct CGPoint { 
        double x; 
        double y; 
    }  _swipeVelocity;
}

@property (nonatomic, retain) NSArray *associatedChatItemGUIDs;
@property (nonatomic, retain) NSArray *chatItemGUIDs;
@property (nonatomic) double initialBalloonOffsetX;
@property (nonatomic) struct CGPoint { double x1; double x2; } swipeVelocity;

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)associatedChatItemGUIDs;
- (id)chatItemGUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)initialBalloonOffsetX;
- (void)setAssociatedChatItemGUIDs:(id)arg1;
- (void)setChatItemGUIDs:(id)arg1;
- (void)setInitialBalloonOffsetX:(double)arg1;
- (void)setSwipeVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })swipeVelocity;

@end
