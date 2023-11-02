
@interface WLKAdamIDToCanonicalIDResponse : NSObject {
    NSString * _canonicalID;
    NSString * _showID;
    NSString * _type;
    NSString * _url;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSString *showID;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSString *url;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithDictionary:(id)arg1;
- (id)showID;
- (id)type;
- (id)url;

@end
