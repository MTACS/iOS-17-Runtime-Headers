
@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic, readonly, copy) NSString *locationText;

- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (id)description;
- (bool)failed;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)locationText;
- (id)message;
- (id)sender;
- (id)time;

@end
