
@interface APMRNowPlayingControllerDelegate : NSObject <MRNowPlayingControllerDelegate> {
    struct OpaqueAPMetadataSource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; struct __CFDictionary {} *x3[4]; struct __CFDictionary {} *x4; struct __CFArray {} *x5; struct __CFNumber {} *x6; struct __CFData {} *x7; struct __CFString {} *x8; id x9; unsigned long long x10; struct __CFDictionary {} *x11; id x12; id x13; } * _metadataSource;
    MRNowPlayingController * _nowPlayingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)controller:(id)arg1 clientPropertiesDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 contentItemsDidUpdateWithContentItemChanges:(id)arg2;
- (void)controller:(id)arg1 didLoadArtworkForContentItems:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controller:(id)arg1 playerPathDidChange:(id)arg2;
- (void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)dealloc;
- (void)flushMetadata;
- (id)initWithMetadataSource:(struct OpaqueAPMetadataSource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; struct __CFDictionary {} *x3[4]; struct __CFDictionary {} *x4; struct __CFArray {} *x5; struct __CFNumber {} *x6; struct __CFData {} *x7; struct __CFString {} *x8; id x9; unsigned long long x10; struct __CFDictionary {} *x11; id x12; id x13; }*)arg1;
- (void)notifyContentItemUpdates:(id)arg1;
- (void)notifyNewContentItems:(id)arg1;
- (void)notifyNewNowPlayingClient:(id)arg1;
- (void)notifyNewPlaybackState:(unsigned int)arg1;
- (void)notifyNewProxiableSupportedCommands:(id)arg1;
- (void)start;
- (void)stop;

@end
