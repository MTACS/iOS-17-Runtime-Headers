
@interface ANSenderContext : NSObject {
    bool  _isValidDevice;
    NSString * _senderCorrelationIdentifier;
}

@property (nonatomic) bool isValidDevice;
@property (nonatomic, retain) NSString *senderCorrelationIdentifier;

- (void).cxx_destruct;
- (id)description;
- (bool)isValidDevice;
- (id)senderCorrelationIdentifier;
- (void)setIsValidDevice:(bool)arg1;
- (void)setSenderCorrelationIdentifier:(id)arg1;

@end
