
@protocol INPlayMessageSoundIntentHandling <NSObject>

@required

- (void)handlePlayMessageSound:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayMessageSoundIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayMessageSoundIntentResponse *, void*

@optional

- (void)confirmPlayMessageSound:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayMessageSoundIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayMessageSoundIntentResponse *, void*

@end
