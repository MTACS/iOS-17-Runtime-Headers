
@interface FPUserInfo : NSObject {
    NSArray * _keys;
    NSArray * _values;
}

@property (readonly) NSArray *keys;
@property (readonly) NSDictionary *userInfo;
@property (readonly) NSArray *values;

+ (id)mergeWithUserInfo:(id)arg1 intoParentUserInfo:(id)arg2;
+ (id)unzipKeysWithZippedArray:(id)arg1;
+ (id)unzipValuesWithZippedArray:(id)arg1;
+ (id)zipWithArray1:(id)arg1 array2:(id)arg2;

- (void).cxx_destruct;
- (id)initWithKeys:(id)arg1 values:(id)arg2;
- (id)initWithUserInfo:(id)arg1;
- (id)keys;
- (id)userInfo;
- (id)values;

@end
