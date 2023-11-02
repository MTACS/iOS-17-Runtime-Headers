
@interface _EXSceneSessionParameters : NSObject <NSSecureCoding> {
    _EXPromise * _initializationParametersPromise;
    NSString * _sceneIdentifier;
    long long  _sizeBridgingOptions;
}

@property (retain) _EXPromise *initializationParametersPromise;
@property (retain) NSString *sceneIdentifier;
@property long long sizeBridgingOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initializationParametersPromise;
- (id)sceneIdentifier;
- (void)setInitializationParametersPromise:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSizeBridgingOptions:(long long)arg1;
- (long long)sizeBridgingOptions;

@end
