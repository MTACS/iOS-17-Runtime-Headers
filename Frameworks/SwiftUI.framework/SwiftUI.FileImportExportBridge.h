
@interface SwiftUI.FileImportExportBridge : NSObject <UIDocumentPickerDelegate> {
    void host;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentationState;
    void presentedPicker;
}

- (void).cxx_destruct;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)init;

@end
