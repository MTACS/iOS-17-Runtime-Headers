
@interface AVCaptureVideoThumbnailOutputInternal : NSObject {
    AVWeakReference * delegateWeakReference;
    bool  didPropagateContents;
    NSArray * filters;
    struct CGSize { 
        double width; 
        double height; 
    }  thumbnailSize;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
