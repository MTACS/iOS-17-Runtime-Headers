
@protocol MoveSpeakerIntentHandling <NSObject>

@required

- (void)handleMoveSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerIntentResponse *, void*
- (void)handleMoveSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerIntentResponse *, void*
- (void)resolveDestinationsForMoveSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDestinationsForMoveSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSourceForMoveSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerSourceResolutionResult *, void*
- (void)resolveSourceForMoveSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerSourceResolutionResult *, void*

@optional

- (void)confirmMoveSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerIntentResponse *, void*
- (void)confirmMoveSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MoveSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MoveSpeakerIntentResponse *, void*

@end
