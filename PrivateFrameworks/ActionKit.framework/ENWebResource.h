
@interface ENWebResource : NSObject {
    NSString * _MIMEType;
    NSURL * _URL;
    NSData * _data;
    NSString * _frameName;
    NSString * _textEncodingName;
}

@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *frameName;
@property (nonatomic, copy) NSString *textEncodingName;

+ (id)webResourceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (id)frameName;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)propertyList;
- (void)setData:(id)arg1;
- (void)setFrameName:(id)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setTextEncodingName:(id)arg1;
- (void)setURL:(id)arg1;
- (id)textEncodingName;

@end
