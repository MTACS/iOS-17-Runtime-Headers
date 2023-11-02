
@interface PFCloudKitExporterOptions : NSObject <NSCopying> {
    CKDatabase * _database;
    NSCloudKitMirroringDelegateOptions * _mirroringDelegateOptions;
    unsigned long long  _perOperationBytesThreshold;
    unsigned long long  _perOperationObjectThreshold;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 options:(id)arg2;

@end
