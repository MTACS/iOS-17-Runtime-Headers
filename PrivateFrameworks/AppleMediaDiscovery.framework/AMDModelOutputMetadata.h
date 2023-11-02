
@interface AMDModelOutputMetadata : NSObject {
    long long  _dataType;
}

@property long long dataType;

- (long long)dataType;
- (long long)getDataType;
- (id)initWithDictionary:(id)arg1;
- (bool)isValid;
- (void)setDataType:(long long)arg1;

@end
