
@interface FBKBugSession : NSManagedObject

@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;
@property (retain) NSString *deviceIdentifier;
@property (retain) NSString *identifier;
@property long long state;
@property (retain) FBKUploadTask *uploadTask;

+ (id)bugSessionWithDEDBugSession:(id)arg1 inContext:(id)arg2;
+ (id)entityName;

- (id)deviceFromManager:(id)arg1;
- (bool)hasNumberOfBytesToUpload;

@end
