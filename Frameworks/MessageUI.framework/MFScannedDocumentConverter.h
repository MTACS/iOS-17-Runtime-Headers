
@interface MFScannedDocumentConverter : NSObject <EFLoggable> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_pdfConverterFromScannedDocument:(id)arg1;
- (id)init;
- (id)pdfDocumentFromScannedDocument:(id)arg1;

@end
