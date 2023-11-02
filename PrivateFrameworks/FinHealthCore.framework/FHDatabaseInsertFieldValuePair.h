
@interface FHDatabaseInsertFieldValuePair : NSObject {
    NSString * _fieldName;
    NSString * _fieldValue;
}

@property (nonatomic, copy) NSString *fieldName;
@property (nonatomic, copy) NSString *fieldValue;

- (void).cxx_destruct;
- (id)description;
- (id)fieldName;
- (id)fieldValue;
- (id)initWithQuoteWrapOption:(id)arg1 fieldValue:(id)arg2 quoteWrap:(bool)arg3;
- (void)setFieldName:(id)arg1;
- (void)setFieldValue:(id)arg1;

@end
