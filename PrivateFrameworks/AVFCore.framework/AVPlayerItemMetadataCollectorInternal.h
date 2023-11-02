
@interface AVPlayerItemMetadataCollectorInternal : NSObject {
    NSArray * classifyingLabels;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSArray * identifiers;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSDate * mostRecentlyModifiedMetadataGroupTimestamp;
    AVWeakReference * weakReferenceToPlayerItem;
}

@end
