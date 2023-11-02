
@protocol _GCAppClientInterface

@required

- (void)handleKeyboardEventAsFrontmostApp:(GCKeyboardEventData *)arg1;
- (void)handleMouseEventAsFrontmostApp:(GCMouseEventData *)arg1;

@end
