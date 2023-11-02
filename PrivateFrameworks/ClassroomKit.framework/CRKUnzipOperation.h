
@interface CRKUnzipOperation : CATOperation {
    struct _BOMCopier { } * _copier;
    NSURL * _destinationDirectoryURL;
    NSError * _stashedError;
    NSURL * _zipFileURL;
}

@property struct _BOMCopier { }*copier;
@property (nonatomic, readonly) NSURL *destinationDirectoryURL;
@property (nonatomic, retain) NSError *stashedError;
@property (nonatomic, readonly) NSURL *zipFileURL;

+ (id)errorFromBOMCopierStatus:(int)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (struct _BOMCopier { }*)copier;
- (id)destinationDirectoryURL;
- (id)initWithZipFileURL:(id)arg1;
- (id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2;
- (void)main;
- (void)operationWillFinish;
- (void)setCopier:(struct _BOMCopier { }*)arg1;
- (void)setStashedError:(id)arg1;
- (id)stashedError;
- (id)zipFileURL;

@end
