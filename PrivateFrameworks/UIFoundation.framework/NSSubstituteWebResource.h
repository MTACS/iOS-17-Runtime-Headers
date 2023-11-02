
@interface NSSubstituteWebResource : NSObject {
    NSData * _data;
    NSString * _frameName;
    NSString * _mimeType;
    NSString * _textEncodingName;
    NSURL * _url;
}

- (id)MIMEType;
- (id)URL;
- (Class)_webResourceClass;
- (id)data;
- (void)dealloc;
- (id)frameName;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)textEncodingName;
- (id)webResource;

@end
