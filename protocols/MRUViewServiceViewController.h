
@protocol MRUViewServiceViewController <NSObject>

@required

- (MPMediaControlsConfiguration *)configuration;
- (id /* block */)customRowTappedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL
- (id /* block */)dismissalBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setConfiguration:(MPMediaControlsConfiguration *)arg1;
- (void)setCustomRowTappedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setDismissalBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)transitionToVisible:(bool)arg1 animated:(bool)arg2;

@end
