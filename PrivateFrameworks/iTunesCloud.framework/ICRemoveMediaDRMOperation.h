
@interface ICRemoveMediaDRMOperation : ICRequestOperation {
    NSString * _mediaFilePath;
    NSString * _newFileExtension;
    NSArray * _sinfs;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithFilePath:(id)arg1 sinfs:(id)arg2;
- (void)removeDRMWithCompletionHandler:(id /* block */)arg1;

@end
