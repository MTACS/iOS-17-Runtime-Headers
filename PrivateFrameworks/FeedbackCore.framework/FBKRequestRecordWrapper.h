
@interface FBKRequestRecordWrapper : NSObject {
    bool  _isFailure;
    FBKRequestRecord * _wrappedObject;
}

@property (nonatomic) bool isFailure;
@property (nonatomic, retain) FBKRequestRecord *wrappedObject;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 response:(id)arg2 session:(id)arg3 cookies:(id)arg4 body:(id)arg5 error:(id)arg6;
- (id)initWithURL:(id)arg1 httpMethod:(id)arg2 responseData:(id)arg3;
- (bool)isFailure;
- (void)setIsFailure:(bool)arg1;
- (void)setWrappedObject:(id)arg1;
- (id)wrappedObject;

@end
