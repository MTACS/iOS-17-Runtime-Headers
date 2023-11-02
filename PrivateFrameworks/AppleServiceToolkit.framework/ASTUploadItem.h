
@interface ASTUploadItem : NSObject {
    NSObject * _dataObject;
    NSURL * _destinationUrl;
    bool  _isComplete;
    bool  _isFailed;
    NSMutableDictionary * _metaInfo;
    NSURLSessionUploadTask * _task;
}

@property (retain) NSObject *dataObject;
@property (retain) NSURL *destinationUrl;
@property bool isComplete;
@property bool isFailed;
@property (retain) NSMutableDictionary *metaInfo;
@property NSURLSessionUploadTask *task;

- (void).cxx_destruct;
- (id)dataObject;
- (id)destinationUrl;
- (id)initWithDestinationUrl:(id)arg1 andSourceData:(id)arg2 andTask:(id)arg3;
- (id)initWithDestinationUrl:(id)arg1 andSourceUrl:(id)arg2 andTask:(id)arg3;
- (bool)isComplete;
- (bool)isFailed;
- (id)metaInfo;
- (void)setDataObject:(id)arg1;
- (void)setDestinationUrl:(id)arg1;
- (void)setIsComplete:(bool)arg1;
- (void)setIsFailed:(bool)arg1;
- (void)setMetaInfo:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
