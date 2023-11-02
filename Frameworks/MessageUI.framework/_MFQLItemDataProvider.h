
@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {
    NSData * _data;
    QLItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) QLItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;
- (id)item;
- (id)provideDataForItem:(id)arg1;

@end
