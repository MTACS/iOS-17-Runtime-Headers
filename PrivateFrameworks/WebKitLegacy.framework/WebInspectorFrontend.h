
@interface WebInspectorFrontend : NSObject {
    struct NakedPtr<WebInspectorFrontendClient> { 
        struct WebInspectorFrontendClient {} *m_ptr; 
    }  m_frontendClient;
}

- (id).cxx_construct;
- (void)attach;
- (void)close;
- (void)detach;
- (id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient {} *x1; })arg1;
- (bool)isDebuggingEnabled;
- (bool)isProfilingJavaScript;
- (bool)isTimelineProfilingEnabled;
- (void)setDebuggingEnabled:(bool)arg1;
- (void)setTimelineProfilingEnabled:(bool)arg1;
- (void)showConsole;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
