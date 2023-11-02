
@protocol AddSpeakerIntentHandling <NSObject>

@required

- (void)handleAddSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerIntentResponse *, void*
- (void)handleAddSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerIntentResponse *, void*
- (void)resolveDestinationsForAddSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDestinationsForAddSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSourceForAddSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerSourceResolutionResult *, void*
- (void)resolveSourceForAddSpeaker:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerSourceResolutionResult *, void*

@optional

- (void)confirmAddSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerIntentResponse *, void*
- (void)confirmAddSpeaker:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddSpeakerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddSpeakerIntentResponse *, void*

@end
