
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption {
    bool  _encrypted;
    NSString * _fieldName;
}

@property (nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) NSString *fieldName;

- (void).cxx_destruct;
- (void)applyTo:(id)arg1;
- (bool)encrypted;
- (id)fieldName;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(bool)arg2;

@end
