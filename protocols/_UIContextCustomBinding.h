
@protocol _UIContextCustomBinding <_UIContextBindable>

@required

- (void)attachBindable;
- (void)detachBindable;
- (bool)shouldAttachBindable;
- (bool)shouldDetachBindable;

@end
