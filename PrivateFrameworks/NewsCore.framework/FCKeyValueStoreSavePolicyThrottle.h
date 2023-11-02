
@interface FCKeyValueStoreSavePolicyThrottle : FCKeyValueStoreSavePolicy {
    double  _delay;
}

- (id)initWithDelay:(double)arg1;
- (void)scheduleSaveOnQueue:(id)arg1 handler:(id /* block */)arg2;

@end
