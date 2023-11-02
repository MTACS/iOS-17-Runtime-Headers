
@interface WebDisplayLinkHandler : NSObject {
    CADisplayLink * m_displayLink;
    void * m_monitor;
}

- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(void*)arg1;
- (void)invalidate;
- (void)setPaused:(bool)arg1;

@end
