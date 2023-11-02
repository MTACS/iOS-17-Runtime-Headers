
@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal * _internal;
}

@property (nonatomic, readonly) NSArray *sourceTimeRanges;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTimeRanges:(id)arg1;
- (id)sourceTimeRanges;

@end
