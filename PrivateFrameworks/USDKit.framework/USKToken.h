
@interface USKToken : NSObject {
    struct TfToken { 
        struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { 
            struct _Rep {} *_ptrAndBits; 
        } _rep; 
    }  _token;
}

+ (id)dataTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })arg1;
+ (id)nodeTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })arg1;
+ (id)roleTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })arg1;
+ (id)schemaTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })arg1;
+ (id)tokenWithDataType:(id)arg1;
+ (id)tokenWithNodeType:(id)arg1;
+ (id)tokenWithRoleType:(id)arg1;
+ (id)tokenWithSchemaType:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })arg1;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_1_1; } x1; })token;

@end
