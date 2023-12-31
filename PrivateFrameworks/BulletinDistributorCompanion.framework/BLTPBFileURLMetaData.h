
@interface BLTPBFileURLMetaData : NSObject {
    NSDictionary * _extraMetadata;
    NSDictionary * _metadata;
    long long  _sequenceNumberError;
    unsigned long long  _sessionState;
}

@property (nonatomic, readonly) NSDictionary *extraMetadata;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) long long sequenceNumberError;
@property (nonatomic, readonly) unsigned long long sessionState;

- (void).cxx_destruct;
- (id)extraMetadata;
- (id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2;
- (id)metadata;
- (long long)sequenceNumberError;
- (unsigned long long)sessionState;
- (id)transportData;

@end
