
@interface CUNFCDevice : NSObject {
    NSURL * _advertisedURI;
    NSUUID * _identifier;
    NFTag * _tag;
}

@property (nonatomic, copy) NSURL *advertisedURI;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NFTag *tag;

- (void).cxx_destruct;
- (id)advertisedURI;
- (id)description;
- (id)identifier;
- (void)setAdvertisedURI:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end
