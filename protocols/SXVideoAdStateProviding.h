
@protocol SXVideoAdStateProviding <NSObject>

@required

- (void)onFail:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id /* block */)onFailBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (void)onFinish:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onFinishBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onLearnMore:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onLearnMoreBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onPause:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onPauseBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onPlay:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onPlayBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onResume:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onResumeBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onSkip:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)onSkipBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
