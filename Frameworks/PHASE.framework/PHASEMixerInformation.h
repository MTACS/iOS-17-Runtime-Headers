
@interface PHASEMixerInformation : NSObject {
    NSString * _identifier;
    long long  _mixerType;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long mixerType;
@property (nonatomic, retain) NSString *uid;

- (void).cxx_destruct;
- (id)identifier;
- (long long)mixerType;
- (void)setIdentifier:(id)arg1;
- (void)setMixerType:(long long)arg1;
- (void)setUid:(id)arg1;
- (id)uid;

@end
