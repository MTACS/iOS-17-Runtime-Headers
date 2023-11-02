
@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _language;
    struct { 
        unsigned long long s[2]; 
    }  _rng;
    long long  _windowLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *language;
@property (readonly) Class superclass;
@property long long windowLength;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLanguage:(id)arg1 windowLength:(long long)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactSharingTransformer:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void)setWindowLength:(long long)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (long long)windowLength;

@end
