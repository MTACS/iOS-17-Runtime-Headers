
@interface PKFakeDisableDelegate : NSObject <PKScribbleInteractionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_infoInProcess;
+ (bool)_shouldAttachForView:(id)arg1;

- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
