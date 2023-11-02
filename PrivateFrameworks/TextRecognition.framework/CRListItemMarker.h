
@interface CRListItemMarker : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _itemizingComponentRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _stringValue;
    long long  _type;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } itemizingComponentRange;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (retain) NSString *stringValue;
@property long long type;

- (void).cxx_destruct;
- (bool)_canCompositeDecimalBeSucceededByCompositeDecimal:(id)arg1;
- (long long)_valueFromDecimal;
- (long long)_valueFromDecorativeDecimal;
- (long long)_valueFromLowercaseLatin;
- (long long)_valueFromUppercaseLatin;
- (id)_valuesFromCompositeDecimal;
- (bool)canBeSucceededByMarker:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 itemizingComponentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (long long)integerValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemizingComponentRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setItemizingComponentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(long long)arg1;
- (id)stringValue;
- (long long)type;

@end
