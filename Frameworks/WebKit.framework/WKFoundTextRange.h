
@interface WKFoundTextRange : UITextRange {
    NSString * _frameIdentifier;
    unsigned long long  _length;
    unsigned long long  _location;
    unsigned long long  _order;
}

@property (nonatomic, copy) NSString *frameIdentifier;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long order;

+ (id)foundTextRangeWithWebFoundTextRange:(struct WebFoundTextRange { unsigned long long x1; unsigned long long x2; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; })arg1;

- (void)dealloc;
- (id)end;
- (id)frameIdentifier;
- (bool)isEmpty;
- (unsigned long long)length;
- (unsigned long long)location;
- (unsigned long long)order;
- (void)setFrameIdentifier:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (id)start;
- (struct WebFoundTextRange { unsigned long long x1; unsigned long long x2; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; })webFoundTextRange;

@end
