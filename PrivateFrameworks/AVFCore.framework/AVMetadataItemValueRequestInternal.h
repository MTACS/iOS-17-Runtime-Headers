
@interface AVMetadataItemValueRequestInternal : NSObject {
    NSString * dataType;
    NSError * error;
    <NSObject><NSCopying> * value;
    AVWeakReference * weakReferenceToMetadataItem;
}

@end
