
@interface LNPerformActionExecutorDelegateProxy : NSObject <LNPerformActionExecutorDelegate> {
    void connection;
    void interface;
}

@property (nonatomic, readonly) long long connectionIdentifier;
@property (nonatomic, readonly) bool hasValidConnection;

- (void).cxx_destruct;
- (long long)connectionIdentifier;
- (bool)hasValidConnection;
- (id)init;
- (id)initWithConnection:(id)arg1 interface:(id)arg2;
- (void)requestActionConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestContinueInApp:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestParameterConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestParameterDisambiguation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestParameterNeedsValue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
