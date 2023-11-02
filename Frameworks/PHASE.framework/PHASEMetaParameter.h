
@interface PHASEMetaParameter : NSObject {
    <MetaParameterValueProtocol> * _delegate;
    NSString * _identifier;
    bool  _registeredGlobally;
    NSString * _uid;
    id  _value;
}

@property <MetaParameterValueProtocol> *delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool registeredGlobally;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, retain) id value;

+ (id)new;

- (void).cxx_destruct;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)initWithUID:(id)arg1 delegate:(id)arg2;
- (bool)registeredGlobally;
- (void)setDelegate:(id)arg1;
- (void)setLocalValueOnly:(id)arg1;
- (void)setRegisteredGlobally:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)uid;
- (id)value;

@end
