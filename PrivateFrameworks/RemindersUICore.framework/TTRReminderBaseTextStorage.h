
@interface TTRReminderBaseTextStorage : NSTextStorage <REMCRMutableAttributedStringEditObserver> {
    REMCRMutableAttributedString * _backingStore;
}

@property (nonatomic, retain) REMCRMutableAttributedString *backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)backingStore;
- (id)init;
- (void)mutableAttributedString:(id)arg1 didEdit:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBackingStore:(id)arg1;
- (id)string;

@end
