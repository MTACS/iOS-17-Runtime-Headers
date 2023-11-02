
@interface PNPSyntheticWaitEvent : PNPSyntheticPencilEvent {
    double  _delay;
}

- (id)initWithDelay:(double)arg1;
- (void)serviceDestination:(id)arg1 fromSource:(id)arg2 withCompletionBlock:(id /* block */)arg3;

@end
