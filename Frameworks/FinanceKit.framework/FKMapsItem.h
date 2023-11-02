
@interface FKMapsItem : NSObject <NSCopying> {
    NSURL * _businessChatURL;
    unsigned long long  _category;
    NSData * _encodedStylingInfo;
    NSString * _heroImageAttributionName;
    NSURL * _heroImageURL;
    NSDate * _lastProcessedDate;
    NSString * _mapsCategoryIdentifier;
    unsigned long long  _muid;
    NSString * _name;
    NSString * _phoneNumber;
    int  _resultProviderIdentifier;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *businessChatURL;
@property (nonatomic) unsigned long long category;
@property (nonatomic, retain) NSData *encodedStylingInfo;
@property (nonatomic, copy) NSString *heroImageAttributionName;
@property (nonatomic, copy) NSURL *heroImageURL;
@property (nonatomic, copy) NSDate *lastProcessedDate;
@property (nonatomic, copy) NSString *mapsCategoryIdentifier;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) int resultProviderIdentifier;
@property (setter=setURL:, nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)businessChatURL;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedStylingInfo;
- (unsigned long long)hash;
- (id)heroImageAttributionName;
- (id)heroImageURL;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 name:(id)arg3 phoneNumber:(id)arg4 url:(id)arg5 heroImageURL:(id)arg6 heroImageAttributionName:(id)arg7 category:(unsigned long long)arg8 mapsCategoryIdentifier:(id)arg9 encodedStylingInfo:(id)arg10 businessChatURL:(id)arg11 lastProcessedDate:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)lastProcessedDate;
- (id)mapsCategoryIdentifier;
- (unsigned long long)muid;
- (id)name;
- (id)phoneNumber;
- (int)resultProviderIdentifier;
- (void)setBusinessChatURL:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setEncodedStylingInfo:(id)arg1;
- (void)setHeroImageAttributionName:(id)arg1;
- (void)setHeroImageURL:(id)arg1;
- (void)setLastProcessedDate:(id)arg1;
- (void)setMapsCategoryIdentifier:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
