
@interface MFQuickReplyAnimationContext : NSObject <EFLoggable> {
    id /* block */  _completionBlock;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    UIView * _sendButtonSnapshot;
    UIView * _snapshot;
    UIView * _textSnapshot;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, retain) UIView *sendButtonSnapshot;
@property (nonatomic, retain) UIView *snapshot;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textSnapshot;

+ (id)log;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 snapshot:(id)arg2 textSnapshot:(id)arg3 sendButtonSnapshot:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)sendButtonSnapshot;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSendButtonSnapshot:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setTextSnapshot:(id)arg1;
- (id)snapshot;
- (id)textSnapshot;

@end
