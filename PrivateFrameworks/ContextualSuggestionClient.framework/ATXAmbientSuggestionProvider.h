
@interface ATXAmbientSuggestionProvider : NSObject <ContextualSuggestionClient.AmbientConfigurationManagerObserver> {
    void $__lazy_storage_$_logger;
    void _suggestionsWidgetSuggestions;
    void calloutQueue;
    void configurationManager;
    void debugRotationNotificationToken;
    void delegate;
    void descriptorProvider;
    void lock;
    void refreshTimer;
    void shouldDisableSuppressionTimerForTooling;
    void suggestionProvider;
}

@property (nonatomic) <ATXAmbientSuggestionProviderDelegate> *delegate;
@property (nonatomic, readonly) NSArray *stackSuggestions;

- (void).cxx_destruct;
- (void)ambientConfigurationManagerCacheDidUpdate;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)logStackDidChangeToWidget:(id)arg1 reason:(unsigned long long)arg2;
- (void)logUserDidAddWidget:(id)arg1;
- (void)logUserDidAddWidgetStack:(id)arg1;
- (void)logUserDidRemoveWidget:(id)arg1;
- (void)logUserDidRemoveWidgetStack:(id)arg1;
- (void)logUserDidTapWidget:(id)arg1;
- (void)logViewDidAppear;
- (void)logViewDidDisappear;
- (void)logWidgetDidAppear:(id)arg1;
- (void)logWidgetDidDisappear:(id)arg1;
- (void)logWidgetStack:(id)arg1 didChangeToWidget:(id)arg2 reason:(unsigned long long)arg3;
- (void)readStacksWithCompletion:(void *)arg1; // needs 1 arg types, found 17: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setDelegate:(id)arg1;
- (id)stackSuggestions;
- (void)writeStacks:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 17: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
