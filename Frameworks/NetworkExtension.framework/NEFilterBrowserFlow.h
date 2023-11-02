
@interface NEFilterBrowserFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSURL * _parentURL;
    NSURLRequest * _request;
    NSURLResponse * _response;
}

@property (retain) NSURL *parentURL;
@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentURL;
- (id)request;
- (id)response;
- (void)setParentURL:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;

@end
