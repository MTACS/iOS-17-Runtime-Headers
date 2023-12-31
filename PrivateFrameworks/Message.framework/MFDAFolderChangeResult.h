
@interface MFDAFolderChangeResult : NSObject {
    NSError * _error;
    NSString * _folderID;
    NSString * _folderName;
    long long  _statusCode;
}

@property (readonly) NSError *error;
@property (readonly) NSString *folderID;
@property (readonly) NSString *folderName;
@property (readonly) long long statusCode;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)folderID;
- (id)folderName;
- (id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;
- (long long)statusCode;
- (bool)wasSuccessful;

@end
