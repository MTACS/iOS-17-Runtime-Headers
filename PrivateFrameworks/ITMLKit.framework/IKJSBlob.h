
@interface IKJSBlob : IKJSObject <IKJSBlob> {
    NSData * _data;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;

@end
