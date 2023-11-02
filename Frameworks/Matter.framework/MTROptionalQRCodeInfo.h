
@interface MTROptionalQRCodeInfo : NSObject {
    NSNumber * _integerValue;
    NSString * _stringValue;
    NSNumber * _tag;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSNumber *infoType;
@property (nonatomic, copy) NSNumber *integerValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, copy) NSNumber *tag;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)infoType;
- (id)integerValue;
- (void)setInfoType:(id)arg1;
- (void)setIntegerValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stringValue;
- (id)tag;
- (unsigned long long)type;

@end
