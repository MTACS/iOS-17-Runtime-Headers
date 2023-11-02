
@interface AVLazyValueLoadingMetadataItemInternal : NSObject {
    NSString * dataType;
    NSMutableArray * loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    <NSObject><NSCopying> * value;
    NSError * valueLoadingError;
    id /* block */  valueLoadingHandler;
    AVMetadataItemValueRequest * valueRequest;
    long long  valueStatus;
}

@end
