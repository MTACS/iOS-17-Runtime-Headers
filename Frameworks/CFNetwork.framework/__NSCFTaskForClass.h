
@interface __NSCFTaskForClass : NSObject {
    <__NSURLSessionTaskGroupForConfiguration> * _group;
    NSData * bodyData;
    Class  cl;
    id /* block */  completion;
    <NSURLSessionTaskDelegate> * delegate;
    id /* block */  downloadCompletion;
    NSString * downloadFilePath;
    NSURLRequest * request;
    NSData * resumeData;
    NSUUID * uniqueIdentifier;
    NSURL * uploadFile;
}

- (void)dealloc;

@end
