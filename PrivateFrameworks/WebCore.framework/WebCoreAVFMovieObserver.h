
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate, AVPlayerItemMetadataOutputPushDelegate> {
    struct RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> { 
        struct WorkQueue {} *m_ptr; 
    }  m_backgroundQueue;
    int  m_delayCallbacks;
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)chapterMetadataDidChange:(id)arg1;
- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithPlayer:(void*)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (void)metadataLoaded;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
