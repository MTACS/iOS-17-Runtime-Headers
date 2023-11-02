
@interface WBSSiteMetadataRequest : NSObject <NSCopying> {
    NSObject<OS_os_activity> * _activity;
    NSDictionary * _extraInfo;
    NSURL * _url;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly, copy) NSDictionary *extraInfo;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extraInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)url;

@end
