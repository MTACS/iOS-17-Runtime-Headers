
@protocol CKTranscriptBalloonCellDelegate <NSObject>

@required

- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didEndBalloonSwipeWithDelta:(double)arg2 swipeVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didTranslateBalloonByDelta:(double)arg2;

@end
