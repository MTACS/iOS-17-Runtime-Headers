
@interface __NSCFResumableUploadState : NSObject <NSSecureCoding> {
    int  _bodyType;
    NSString * _draftVersion;
    long long  _offset;
    NSURLRequest * _originalRequest;
    BOOL  _repeatedStreamOpenings;
    NSURL * _resumeURL;
    BOOL  _retryCounter;
    int  _state;
    long long  _streamLength;
    NSData * _uploadData;
    NSURL * _uploadFile;
    bool  _userOverride;
}

@property (copy) NSURL *uploadFile;

+ (id)rusWithResumeData:(id)arg1 originalRequest:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResumeDataForTaskInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isResumable;
- (void)setUploadFile:(id)arg1;
- (id)uploadFile;

@end
