
@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {
    id  _byteStream;
    bool  _certifiedText;
    NSString * _encoding;
    NSString * _stringData;
}

@property (nonatomic, retain) id byteStream;
@property (nonatomic) bool certifiedText;
@property (nonatomic, retain) NSString *encoding;
@property (nonatomic, retain) NSString *stringData;

- (void).cxx_destruct;
- (id)byteStream;
- (bool)certifiedText;
- (id)encoding;
- (void)setByteStream:(id)arg1;
- (void)setCertifiedText:(bool)arg1;
- (void)setEncoding:(id)arg1;
- (void)setStringData:(id)arg1;
- (id)stringData;

@end
