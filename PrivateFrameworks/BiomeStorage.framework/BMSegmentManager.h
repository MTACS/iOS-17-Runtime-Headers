
@interface BMSegmentManager : NSObject <BMFileManagerDelegate> {
    BMStoreConfig * _config;
    BMFrameStore * _currentFrameStore;
    <BMSegmentManagerDelegate> * _delegate;
    void * _deviceLockStateRegistration;
    Class  _eventDataClass;
    BMFileManager * _fileManager;
    BMStreamMetadata * _metadata;
    NSString * _path;
    unsigned long long  _permission;
    _PASLock * _protectedState;
}

@property (nonatomic, readonly) BMFrameStore *currentFrameStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BMSegmentManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataAccessible;
@property (nonatomic, readonly) NSString *lastSegmentName;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSOrderedSet *segmentNames;
@property (readonly) Class superclass;

+ (unsigned long long)indexOfSegmentContainingEventTime:(double)arg1 fromSegments:(id)arg2;
+ (id)segmentNameFromTimestamp:(double)arg1;
+ (unsigned long long)sizeOfNewFrameStoreInBytesFromNonPagedSize:(unsigned long long)arg1 isTombstoneSegment:(bool)arg2;
+ (double)timestampFromSegmentName:(id)arg1;

- (void).cxx_destruct;
- (id)_segmentAfterFrameStore:(id)arg1 orCreateSegmentWithTimestamp:(id)arg2 direction:(unsigned long long)arg3;
- (void)_updateSegments;
- (long long)cachingOptionsForFileHandleWithAttributes:(id)arg1;
- (id)currentFrameStore;
- (void)dealloc;
- (id)delegate;
- (void)enumerateSegmentsFrom:(double)arg1 to:(double)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateSegmentsNamesFrom:(double)arg1 to:(double)arg2 withBlock:(id /* block */)arg3;
- (id)fileHandleForFile:(id)arg1 error:(id*)arg2;
- (void)handleDeviceLocking;
- (void)handleDeviceLockingCX;
- (void)handleDeviceUnlock;
- (id)initWithDirectory:(id)arg1 fileManager:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4;
- (bool)isDataAccessible;
- (id)lastFrameStoreOrCreateWithTimestamp:(double)arg1;
- (id)lastSegmentName;
- (id)newFramestoreWithTimestamp:(double)arg1 segmentNames:(id)arg2 segmentFileHandles:(id)arg3;
- (id)nextSegmentAfterFrameStore:(id)arg1 segmentNames:(id)arg2 segmentFileHandles:(id)arg3 direction:(unsigned long long)arg4;
- (void)openFiles:(id)arg1 saveToOpenFiles:(id)arg2;
- (id)orderedSegmentsInDirectory:(id)arg1;
- (id)path;
- (void)pruneSegmentsToMaxAge:(double)arg1;
- (void)pruneSegmentsToMaxSizeInBytes:(unsigned long long)arg1;
- (void)refreshSegmentsList;
- (bool)removeSegmentNamed:(id)arg1;
- (void)reverseEnumerateSegmentsFrom:(double)arg1 to:(double)arg2 withBlock:(id /* block */)arg3;
- (void)reverseEnumerateSegmentsNamesFrom:(double)arg1 to:(double)arg2 withBlock:(id /* block */)arg3;
- (id)segmentAfterFrameStore:(id)arg1 direction:(unsigned long long)arg2;
- (id)segmentAfterFrameStore:(id)arg1 orCreateSegmentWithTimestamp:(double)arg2;
- (id)segmentContainingTimestamp:(double)arg1;
- (id)segmentNames;
- (id)segmentWithFilename:(id)arg1 error:(id*)arg2;
- (id)segmentWithFilename:(id)arg1 segmentNames:(id)arg2 segmentFileHandles:(id)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;
- (bool)shouldCacheFileDescriptors;
- (void)updateSegmentsWithGuardedDeviceLockStateData:(id)arg1;

@end
