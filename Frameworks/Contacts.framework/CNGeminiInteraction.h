
@interface CNGeminiInteraction : NSObject {
    NSString * _contactIdentifier;
    long long  _directionality;
    NSString * _handle;
    long long  _transport;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly) long long directionality;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) long long transport;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (long long)directionality;
- (id)handle;
- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3;
- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4;
- (long long)transport;

@end
