
@interface LNAutoShortcutParameterPhraseGroup : NSObject {
    NSUUID * _parameterID;
    NSArray * _phrases;
}

@property (nonatomic, readonly) NSUUID *parameterID;
@property (nonatomic, readonly) NSArray *phrases;

- (void).cxx_destruct;
- (void)addPhrase:(id)arg1;
- (id)initWithParameterID:(id)arg1 phrases:(id)arg2;
- (id)parameterID;
- (id)phrases;

@end
