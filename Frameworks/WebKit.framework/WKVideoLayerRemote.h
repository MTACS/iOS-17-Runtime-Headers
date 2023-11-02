
@interface WKVideoLayerRemote : CALayer {
    struct RetainPtr<CAContext> { 
        void *m_ptr; 
    }  _context;
    struct Seconds { 
        double m_value; 
    }  _delay;
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _mediaPlayerPrivateRemote;
    struct unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> { 
        struct __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>> { 
            struct Timer {} *__value_; 
        } __ptr_; 
    }  _resolveBoundsTimer;
    bool  _shouldRestartWhenTimerFires;
    unsigned char  _videoGravity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _videoLayerFrame;
}

@property (nonatomic) void*mediaPlayerPrivateRemote;
@property (nonatomic) unsigned char videoGravity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoLayerFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void*)mediaPlayerPrivateRemote;
- (bool)resizePreservingGravity;
- (void)resolveBounds;
- (void)setMediaPlayerPrivateRemote:(void*)arg1;
- (void)setVideoGravity:(unsigned char)arg1;
- (void)setVideoLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned char)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoLayerFrame;

@end
