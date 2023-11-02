
@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying> {
    NSDictionary * _SDKDictionary;
    NSString * _domain;
    NSString * _identifier;
    NSString * _name;
    unsigned int  _platform;
    NSURL * _url;
    unsigned long long  _variant;
}

@property (retain) NSDictionary *SDKDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property unsigned int platform;
@property (readonly) Class superclass;
@property (retain) NSURL *url;
@property unsigned long long variant;

- (void).cxx_destruct;
- (id)SDKDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (id)identifier;
- (id)name;
- (unsigned int)platform;
- (void)reset;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setSDKDictionary:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)url;
- (unsigned long long)variant;

@end
