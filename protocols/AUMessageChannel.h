
@protocol AUMessageChannel

@optional

- (NSDictionary *)callAudioUnit:(NSDictionary *)arg1;
- (id /* block */)callHostBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (void)setCallHostBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, NSDictionary *, void*

@end
