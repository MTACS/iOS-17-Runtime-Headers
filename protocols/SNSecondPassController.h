
@protocol SNSecondPassController <NSObject>

@required

- (id /* block */)beginSecondPassHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)endSecondPassHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)firstPassDidProduceResult:(id <SNResult>)arg1;
- (void)secondPassDidProduceResult:(id <SNResult>)arg1;
- (void)setBeginSecondPassHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setEndSecondPassHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
