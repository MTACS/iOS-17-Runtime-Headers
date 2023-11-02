
@interface SBINFocusAppIntent : SBINAppIntent {
    NSString * _modeIdentifier;
}

@property (nonatomic, readonly) NSString *modeIdentifier;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)hash;
- (id)initWithModeIdentifier:(id)arg1 systemContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modeIdentifier;

@end
