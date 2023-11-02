
@protocol SWInteractionProvider <NSObject>

@required

- (<SWInteraction> *)interaction;
- (id /* block */)interactionBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SWInteraction> *, void*
- (void)setInteractionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
