
@interface IMContentLookupService : NSObject {
    AMSLookup * _amsLookup;
    NSString * _artworkType;
    NSArray * _ids;
    NSString * _profile;
    long long  _version;
}

@property (nonatomic, retain) AMSLookup *amsLookup;
@property (nonatomic, retain) NSString *artworkType;
@property (nonatomic, retain) NSArray *ids;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (void)_configureRequest;
- (id)amsLookup;
- (id)artworkType;
- (id)ids;
- (id)init;
- (id)initWithIds:(id)arg1;
- (id)profile;
- (void)request:(id /* block */)arg1;
- (void)setAmsLookup:(id)arg1;
- (void)setArtworkType:(id)arg1;
- (void)setIds:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
