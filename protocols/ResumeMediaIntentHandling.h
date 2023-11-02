
@protocol ResumeMediaIntentHandling <NSObject>

@required

- (void)handleResumeMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeMediaIntentResponse *, void*
- (void)handleResumeMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeMediaIntentResponse *, void*
- (void)resolveDevicesForResumeMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForResumeMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmResumeMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeMediaIntentResponse *, void*
- (void)confirmResumeMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeMediaIntentResponse *, void*

@end
