
@protocol MTLEventSPI <MTLEvent>

@required

- (bool)enableBarrier;
- (void)setEnableBarrier:(bool)arg1;
- (bool)supportsRollback;

@end
