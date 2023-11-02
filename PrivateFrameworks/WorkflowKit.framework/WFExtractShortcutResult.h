
@interface WFExtractShortcutResult : NSObject {
    long long  _fileContentType;
    NSString * _iCloudIdentifier;
    WFWorkflowRecord * _record;
    NSDate * _sharedDate;
    NSString * _sourceApplicationIdentifier;
}

@property (nonatomic, readonly) long long fileContentType;
@property (nonatomic, readonly, copy) NSString *iCloudIdentifier;
@property (nonatomic, readonly) WFWorkflowRecord *record;
@property (nonatomic, readonly) NSDate *sharedDate;
@property (nonatomic, readonly, copy) NSString *sourceApplicationIdentifier;

- (void).cxx_destruct;
- (long long)fileContentType;
- (id)iCloudIdentifier;
- (id)initWithRecord:(id)arg1 fileContentType:(long long)arg2 iCloudIdentifier:(id)arg3 sourceApplicationIdentifier:(id)arg4 sharedDate:(id)arg5;
- (id)initWithRecord:(id)arg1 fileContentType:(long long)arg2 sourceApplicationIdentifier:(id)arg3 sharedDate:(id)arg4;
- (id)record;
- (id)sharedDate;
- (id)sourceApplicationIdentifier;

@end
