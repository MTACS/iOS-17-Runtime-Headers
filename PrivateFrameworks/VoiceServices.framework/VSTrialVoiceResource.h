
@interface VSTrialVoiceResource : NSObject {
    NSString * _language;
    NSString * _path;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)factorName;
- (id)initWithFactorLevel:(id)arg1;
- (id)initWithFactorName:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (bool)isLocal;
- (id)language;
- (id)path;
- (void)setLanguage:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
