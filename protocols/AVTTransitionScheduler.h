
@protocol AVTTransitionScheduler

@required

- (void)didCompleteEvent;
- (id /* block */)eventHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id)initWithEventHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scheduleEvent;
- (void)stop;

@end
