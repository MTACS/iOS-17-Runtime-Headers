
@interface AVAirMessageTransformer : AVDataValueTransformer {
    Class  _messageClass;
    NSData * _previousUnusedData;
}

@property (nonatomic, readonly) Class messageClass;

- (void).cxx_destruct;
- (id)dataForMessage:(id)arg1;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (void)resetState;
- (id)reverseTransformerForMessageData:(id)arg1;

@end
