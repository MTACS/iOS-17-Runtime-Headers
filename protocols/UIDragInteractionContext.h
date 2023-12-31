
@protocol UIDragInteractionContext <UIInteractionContext>

@required

- (id /* block */)animations:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)completion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, long long, void*, id, SEL
- (NSArray *)items;
- (bool)shouldAnimateLift;
- (long long)state;

@end
