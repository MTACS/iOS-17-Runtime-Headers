
@interface TSKQueuedObserverSet : NSObject {
    id  mChangeSource;
    int  mChangeType;
    bool  mIsClass;
    id  mObserver;
}

+ (id)queuedObserverSetWithChangeType:(int)arg1 observer:(id)arg2 changeSource:(id)arg3 isClass:(bool)arg4;

- (void)dealloc;

@end
