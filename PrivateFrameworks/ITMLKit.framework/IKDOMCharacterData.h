
@interface IKDOMCharacterData : IKDOMNode <IKJSDOMCharacterData>

@property (nonatomic, retain) NSString *data;
@property (nonatomic, readonly) unsigned long long length;

- (id)data;
- (unsigned long long)length;
- (void)setData:(id)arg1;

@end
