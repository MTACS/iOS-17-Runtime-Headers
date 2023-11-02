
@interface SiriReaderIntents.ReadThisAppIntentConnectionDelegate : NSObject <LNActionExecutorDelegate> {
    void aceService;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
}

- (void).cxx_destruct;
- (void)executor:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(void *)arg1 environmentForViewSnippetWithCompletion:(void *)arg2; // needs 2 arg types, found 35: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned long, inout _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned long, inout unsigned short, in int, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, in void, int, const out in /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsContinueInAppWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (bool)executor:(id)arg1 shouldRunShowOutputAction:(id)arg2;
- (id)init;

@end
