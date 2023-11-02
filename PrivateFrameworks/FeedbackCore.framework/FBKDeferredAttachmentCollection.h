
@interface FBKDeferredAttachmentCollection : NSObject {
    FBKGroupedDevice * _device;
    NSMutableArray * _sortedAttachments;
}

@property (nonatomic, readonly) NSSet *allMatchers;
@property (nonatomic, retain) FBKGroupedDevice *device;
@property (nonatomic, retain) NSMutableArray *sortedAttachments;

- (void).cxx_destruct;
- (id)allMatchers;
- (id)deferredAttachmentsFromMatchers:(id)arg1;
- (id)device;
- (unsigned long long)hash;
- (id)initDevice:(id)arg1 matcherPredicates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setSortedAttachments:(id)arg1;
- (id)sortedAttachments;

@end
