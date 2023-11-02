
@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol> {
    long long  _char;
}

@property long long character;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)character;
- (id)initForCharacter:(long long)arg1;
- (id)initForCharacter:(long long)arg1 style:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCharacter:(long long)arg1;

@end
