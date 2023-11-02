
@interface NFCVASCommandConfiguration : NSObject <NSCopying> {
    long long  _mode;
    NSString * _passTypeIdentifier;
    NSURL * _url;
}

@property (nonatomic) long long mode;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithVASMode:(long long)arg1 passTypeIdentifier:(id)arg2 url:(id)arg3;
- (long long)mode;
- (id)passTypeIdentifier;
- (void)setMode:(long long)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
