
@interface SKAStatusUnencryptedEnvelope : NSObject {
    NSDictionary * _envelopeDictionary;
}

@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *datePublished;
@property (nonatomic, retain) NSDictionary *envelopeDictionary;
@property (nonatomic, readonly) NSString *statusUniqueIdentifier;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)datePublished;
- (id)envelopeDictionary;
- (id)initWithEnvelopeDictionary:(id)arg1;
- (void)setEnvelopeDictionary:(id)arg1;
- (id)statusUniqueIdentifier;

@end
