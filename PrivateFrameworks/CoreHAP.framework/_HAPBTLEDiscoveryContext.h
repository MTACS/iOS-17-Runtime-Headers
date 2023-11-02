
@interface _HAPBTLEDiscoveryContext : HMFObject {
    NSMapTable * _characteristicSignatures;
    id /* block */  _completionHandler;
    bool  _discovering;
    NSMutableArray * _discoveringCharacteristics;
    NSMutableArray * _discoveringDescriptors;
    NSMutableArray * _discoveringServices;
    long long  _discoveryType;
    NSMutableArray * _readingCharacteristics;
    NSMutableArray * _readingDescriptors;
    NSMutableArray * _readingSignatureCharacteristics;
    NSMutableArray * _readingSignatureServices;
    NSMapTable * _serviceSignatures;
}

@property (nonatomic, readonly) NSMapTable *characteristicSignatures;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (getter=isDiscovering, nonatomic) bool discovering;
@property (nonatomic, readonly) NSMutableArray *discoveringCharacteristics;
@property (nonatomic, readonly) NSMutableArray *discoveringDescriptors;
@property (nonatomic, readonly) NSMutableArray *discoveringServices;
@property (nonatomic, readonly) long long discoveryType;
@property (nonatomic, readonly) NSMutableArray *readingCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingDescriptors;
@property (nonatomic, readonly) NSMutableArray *readingSignatureCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingSignatureServices;
@property (nonatomic, readonly) NSMapTable *serviceSignatures;

- (void).cxx_destruct;
- (id)characteristicSignatures;
- (id /* block */)completionHandler;
- (id)discoveringCharacteristics;
- (id)discoveringDescriptors;
- (id)discoveringServices;
- (long long)discoveryType;
- (id)init;
- (id)initWithDiscoveryType:(long long)arg1;
- (bool)isComplete;
- (bool)isDiscovering;
- (id)readingCharacteristics;
- (id)readingDescriptors;
- (id)readingSignatureCharacteristics;
- (id)readingSignatureServices;
- (void)reset;
- (id)serviceSignatures;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDiscovering:(bool)arg1;

@end
