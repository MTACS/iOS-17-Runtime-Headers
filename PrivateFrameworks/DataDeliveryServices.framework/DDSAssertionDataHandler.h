
@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling> {
    NSURL * _assertionStorageFileURL;
}

@property (readonly, copy) NSURL *assertionStorageFileURL;

- (void).cxx_destruct;
- (id)assertionStorageFileURL;
- (id)initWithAssertionStorageFileURL:(id)arg1;
- (id)loadAssertionData;
- (void)saveAssertionData:(id)arg1;

@end
