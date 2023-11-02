
@interface MPStatusKitSubscriptionKeys : NSObject {
    NSData * _chainKey;
    unsigned short  _index;
    NSData * _signingKey;
}

@property (nonatomic, readonly) NSData *chainKey;
@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, readonly) NSData *signingKey;

- (void).cxx_destruct;
- (id)chainKey;
- (unsigned short)index;
- (id)initWithIndex:(unsigned short)arg1 chainKey:(id)arg2 signingKey:(id)arg3;
- (id)signingKey;

@end
