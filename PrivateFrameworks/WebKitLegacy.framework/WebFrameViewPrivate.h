
@interface WebFrameViewPrivate : NSObject {
    struct RetainPtr<WAKScrollView> { 
        void *m_ptr; 
    }  frameScrollView;
    bool  includedInWebKitStatistics;
    WebFrame * webFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
