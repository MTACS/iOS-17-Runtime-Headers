
@protocol SiriSharedUIStackableContent <SiriSharedUIAccessibilityFocusing>

@required

- (long long)attachmentType;
- (double)attachmentYOffset;
- (struct CGSize { double x1; double x2; })portraitContentSize;
- (void)setAttachmentType:(long long)arg1;
- (void)setAttachmentYOffset:(double)arg1;
- (void)setStackConstraints:(SiriSharedUIViewStackConstraints *)arg1;
- (void)setStackContainerDelegate:(id <SiriSharedUIStackableContentDelegate>)arg1;
- (SiriSharedUIViewStackConstraints *)stackConstraints;
- (<SiriSharedUIStackableContentDelegate> *)stackContainerDelegate;

@optional

- (SiriSharedUIAnimationContext *)animationContextForFrameAndLayoutUpdate;
- (NSArray *)customAttachmentConstraints;
- (void)relayout;
- (void)setAnimationContextForFrameAndLayoutUpdate:(SiriSharedUIAnimationContext *)arg1;
- (void)setCustomAttachmentConstraints:(NSArray *)arg1;
- (void)setUseLowerPriorityHeightConstraint:(bool)arg1;
- (bool)useLowerPriorityHeightConstraint;

@end
