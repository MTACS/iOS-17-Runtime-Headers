
@interface SFLinkHoverEvent : NSObject <SFWebPageStatusBarMessage> {
    NSAttributedString * _attributedMessage;
    bool  _hasFragmentOnSamePage;
    bool  _hasTargetFrame;
    long long  _modifierFlags;
    bool  _targetFrameIsSameAsFrame;
    NSURL * _url;
}

@property (nonatomic, readonly) NSAttributedString *attributedMessageString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) long long modifierFlags;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)_formattedMessage;
- (id)attributedMessageString;
- (unsigned long long)hash;
- (id)initWithHoveredLinkURL:(id)arg1 forCurrentURL:(id)arg2 modifierFlags:(long long)arg3 frame:(id)arg4 targetFrame:(id)arg5;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (long long)modifierFlags;
- (id)url;

@end
