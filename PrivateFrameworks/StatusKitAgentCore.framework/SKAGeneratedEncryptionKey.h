
@interface SKAGeneratedEncryptionKey : NSObject {
    NSDate * _dateGenerated;
    NSData * _originalOutgoingRatchetState;
}

@property (nonatomic, readonly) NSDate *dateGenerated;
@property (nonatomic, readonly) MPStatusKitIncomingRatchet *incomingRatchet;
@property (nonatomic, readonly) NSData *originalOutgoingRatchetState;
@property (nonatomic, readonly) MPStatusKitOutgoingRatchet *outgoingRatchet;

+ (id)logger;

- (void).cxx_destruct;
- (id)dateGenerated;
- (id)incomingRatchet;
- (id)initWithCoreDataGeneratedEncryptionKey:(id)arg1;
- (id)initWithOriginalOutgoingRatchetState:(id)arg1 dateGenerated:(id)arg2;
- (id)originalOutgoingRatchetState;
- (id)outgoingRatchet;

@end
