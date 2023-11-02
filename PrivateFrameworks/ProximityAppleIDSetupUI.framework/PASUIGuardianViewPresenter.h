
@interface PASUIGuardianViewPresenter : NSObject {
    void $__lazy_storage_$_analytics;
    void _analyticsProvider;
    void _authenticator;
    void _messageSessionProvider;
    void _viewControllerProvider;
    void cardAdapter;
    void cardContentView;
    void delegate;
    void flowController;
    void flowTimer;
    void parentViewController;
}

@property (nonatomic) <PASUIGuardianViewPresenterDelegate> *delegate;

- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 35: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSharingViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTemplateMessageSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 22: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
