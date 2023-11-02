
@interface TVPContentKeyRequestParams : NSObject {
    NSArray * _keyFormatVersions;
    NSString * _keyIdentifier;
}

@property (nonatomic, retain) NSArray *keyFormatVersions;
@property (nonatomic, retain) NSString *keyIdentifier;

- (void).cxx_destruct;
- (id)keyFormatVersions;
- (id)keyIdentifier;
- (void)setKeyFormatVersions:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;

@end
