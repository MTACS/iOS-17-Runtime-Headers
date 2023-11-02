
@interface AVContentKeyRequestParams : NSObject {
    NSData * _contentIdentifier;
    id  _identifier;
    NSData * _initializationData;
    NSData * _keyIDFromInitializationData;
    NSDictionary * _options;
}

@property (copy) NSData *contentIdentifier;
@property (copy) id identifier;
@property (copy) NSData *initializationData;
@property (copy) NSData *keyIDFromInitializationData;
@property (copy) NSDictionary *options;

- (id)contentIdentifier;
- (void)dealloc;
- (id)identifier;
- (id)initWithInitializationData:(id)arg1 contentIdentifier:(id)arg2 keyIDFromInitializationData:(id)arg3 options:(id)arg4 identifier:(id)arg5;
- (id)initializationData;
- (id)keyIDFromInitializationData;
- (id)options;
- (void)setContentIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitializationData:(id)arg1;
- (void)setKeyIDFromInitializationData:(id)arg1;
- (void)setOptions:(id)arg1;

@end
