
@interface WLKBasicShowMetadata : WLKBasicContentMetadata {
    NSDate * _finaleDate;
    NSString * _network;
    NSDate * _releaseDate;
}

@property (nonatomic, readonly) NSDate *finaleDate;
@property (nonatomic, readonly, copy) NSString *network;
@property (nonatomic, readonly) NSDate *releaseDate;

- (void).cxx_destruct;
- (id)finaleDate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)network;
- (id)releaseDate;

@end
