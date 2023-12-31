
@interface WBReadingList : NSObject {
    WBReadingListPrivate * _private;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultReadingList;
+ (bool)supportsURL:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4;
- (id)init;

@end
