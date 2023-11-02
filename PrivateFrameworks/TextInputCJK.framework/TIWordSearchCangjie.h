
@interface TIWordSearchCangjie : TIWordSearchShapeBased {
    bool  _suchengEnabled;
    bool  _supportsEnglish;
}

@property bool suchengEnabled;
@property bool supportsEnglish;

- (id)initTIWordSearchWithInputMode:(id)arg1;
- (int)mecabraInputMethodType;
- (void)setSuchengEnabled:(bool)arg1;
- (void)setSupportsEnglish:(bool)arg1;
- (bool)suchengEnabled;
- (bool)supportsEnglish;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (bool)validateCode:(id)arg1 withOption:(unsigned long long)arg2;

@end
