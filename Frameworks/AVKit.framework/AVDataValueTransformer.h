
@interface AVDataValueTransformer : NSObject <AVAirTransportTransformationProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)messageTransformerWithClass:(Class)arg1;

- (id)dataForMessage:(id)arg1;
- (id)reverseTransformerForMessageData:(id)arg1;

@end
