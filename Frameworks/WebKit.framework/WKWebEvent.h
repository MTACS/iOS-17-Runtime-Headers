
@interface WKWebEvent : WebEvent {
    struct RetainPtr<UIEvent> { 
        void *m_ptr; 
    }  _uiEvent;
}

@property (nonatomic, readonly, retain) UIEvent *uiEvent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (id)uiEvent;

@end
