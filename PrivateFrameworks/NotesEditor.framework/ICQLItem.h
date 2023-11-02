
@interface ICQLItem : QLItem <QLPreviewItemDataProvider> {
    ICAttachment * _attachment;
}

@property (retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attachment;
- (id)initWithAttachment:(id)arg1;
- (id)previewItemTitle;
- (id)provideDataForItem:(id)arg1;
- (void)setAttachment:(id)arg1;

@end
