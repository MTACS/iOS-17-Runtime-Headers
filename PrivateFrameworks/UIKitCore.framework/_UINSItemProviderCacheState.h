
@interface _UINSItemProviderCacheState : NSObject {
    NSDate * _expirationDate;
    NSString * _typeIdentifier;
    NSURL * _url;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *typeIdentifier;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)typeIdentifier;
- (id)url;

@end
