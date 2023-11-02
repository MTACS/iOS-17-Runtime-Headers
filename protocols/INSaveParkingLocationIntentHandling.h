
@protocol INSaveParkingLocationIntentHandling <NSObject>

@required

- (void)handleSaveParkingLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSaveParkingLocationIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSaveParkingLocationIntentResponse *, void*

@optional

- (void)confirmSaveParkingLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSaveParkingLocationIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSaveParkingLocationIntentResponse *, void*
- (void)resolveParkingLocationForSaveParkingLocation:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSaveParkingLocationIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlacemarkResolutionResult *, void*
- (void)resolveParkingNoteForSaveParkingLocation:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSaveParkingLocationIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@end
