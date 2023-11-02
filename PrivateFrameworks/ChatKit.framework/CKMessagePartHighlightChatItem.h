
@interface CKMessagePartHighlightChatItem : CKAssociatedMessageChatItem {
    NSString * _timestampString;
}

@property (nonatomic, readonly) NSString *timestampString;

- (void).cxx_destruct;
- (id)associatedChatItemGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (id)guid;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)messagePartHighlightChatItem;
- (bool)parentMessageIsFromMe;
- (id)sender;
- (id)time;
- (id)timestampString;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
