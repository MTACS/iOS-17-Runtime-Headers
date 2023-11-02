
@interface _WKPublicKeyCredentialDescriptor : NSObject {
    NSData * _identifier;
    NSArray * _transports;
}

@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSArray *transports;

- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTransports:(id)arg1;
- (id)transports;

@end
