
@interface WFDeferredLocalizedString : NSString {
    NSString * _backingStore;
    NSString * _localizedValue;
}

@property (nonatomic, copy) NSString *backingStore;
@property (nonatomic, copy) NSString *localizedValue;

- (void).cxx_destruct;
- (id)backingStore;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (unsigned long long)length;
- (id)localizedValue;
- (void)setBackingStore:(id)arg1;
- (void)setLocalizedValue:(id)arg1;

@end
