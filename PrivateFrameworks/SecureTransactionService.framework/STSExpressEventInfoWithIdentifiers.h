
@interface STSExpressEventInfoWithIdentifiers : STSExpressEventInfo {
    NSString * _appletIdentifier;
    NSString * _keyIdentifier;
}

@property (nonatomic, readonly) NSString *appletIdentifier;
@property (nonatomic, readonly) NSString *keyIdentifier;

- (void).cxx_destruct;
- (id)appletIdentifier;
- (id)initWithState:(unsigned int)arg1 appletIdentifier:(id)arg2 keyIdentifier:(id)arg3;
- (id)keyIdentifier;

@end
