
@interface AMDModelInputMetadata : NSObject <PostRemapOperation> {
    long long  _dataType;
    NSNumber * _hashOpModValue;
    NSNumber * _paddingValue;
    NSString * _postRemapOperation;
    NSArray * _shape;
    NSNumber * _size;
    NSNumber * _truncateOpMaxValue;
    NSNumber * _truncateOpMinValue;
}

@property long long dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *hashOpModValue;
@property (nonatomic, retain) NSNumber *paddingValue;
@property (nonatomic, retain) NSString *postRemapOperation;
@property (nonatomic, retain) NSArray *shape;
@property (nonatomic, retain) NSNumber *size;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *truncateOpMaxValue;
@property (nonatomic, retain) NSNumber *truncateOpMinValue;

+ (long long)getDataTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (long long)dataType;
- (long long)getDataType;
- (id)getHashOpModValue;
- (id)getPaddingValue;
- (id)getPostRemapOperationName;
- (id)getShape;
- (id)getSize;
- (id)getTruncateOpMaxValue;
- (id)getTruncateOpMinValue;
- (id)hashOpModValue;
- (id)initWithDictionary:(id)arg1;
- (bool)isValid;
- (id)paddingValue;
- (id)postRemapOperation;
- (void)setDataType:(long long)arg1;
- (void)setHashOpModValue:(id)arg1;
- (void)setPaddingValue:(id)arg1;
- (void)setPostRemapOperation:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setTruncateOpMaxValue:(id)arg1;
- (void)setTruncateOpMinValue:(id)arg1;
- (id)shape;
- (id)size;
- (id)truncateOpMaxValue;
- (id)truncateOpMinValue;

@end
