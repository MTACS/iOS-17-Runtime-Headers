
@interface PLFileManagerAllocatedSizeRemoveDelegate : NSObject <NSFileManagerDelegate> {
    unsigned long long  _count;
    long long  _totalFileAllocatedSize;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long totalFileAllocatedSize;

- (unsigned long long)count;
- (bool)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;
- (long long)totalFileAllocatedSize;

@end
