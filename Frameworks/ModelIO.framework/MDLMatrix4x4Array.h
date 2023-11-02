
@interface MDLMatrix4x4Array : NSObject <NSCopying> {
    struct VtValue { 
        struct type { 
            unsigned char __lx[8]; 
        } _storage; 
        struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { 
            struct _TypeInfo {} *_ptrAndBits; 
        } _info; 
    }  _data;
    unsigned long long  _elementCount;
}

@property (nonatomic, readonly) unsigned long long elementCount;
@property (nonatomic, readonly) unsigned long long precision;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)elementCount;
- (unsigned long long)getDouble4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithElementCount:(unsigned long long)arg1;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const void*)arg1;
- (void)resetWithUsdAttribute:(const void*)arg1 time:(double)arg2;
- (void)setDouble4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;
- (void)setFloat4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;

@end
