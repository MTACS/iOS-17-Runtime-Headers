
@interface BKSMutableMousePointerEventGlobalRoute : BKSMousePointerEventGlobalRoute

@property (nonatomic) unsigned int contextID;
@property (nonatomic, retain) BKSMousePointerGlobalContextOptions *options;

- (void)setContextID:(unsigned int)arg1;
- (void)setOptions:(id)arg1;

@end
