
@interface HKGenericDocumentSample : HKDocumentSample {
    NSString * _extension;
    NSFileHandle * _fileHandle;
    NSData * _thumbnailData;
    NSString * _title;
}

@property (readonly, copy) NSString *extension;
@property (readonly, copy) NSData *thumbnailData;
@property (readonly, copy) NSString *title;

+ (id)documentSampleWithTitle:(id)arg1 fileHandle:(id)arg2 date:(id)arg3 metadata:(id)arg4;

- (void).cxx_destruct;
- (id)extension;
- (id)thumbnailData;
- (id)title;

@end
