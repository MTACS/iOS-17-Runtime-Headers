
@interface MSVSegmentedDecoder : NSCoder {
    MSVSegmentedCodingPackage * _package;
    Class  _rootClass;
    NSArray * _subcoders;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) MSVSegmentedCodingPackage *package;
@property (nonatomic, retain) Class rootClass;
@property (nonatomic, retain) NSArray *subcoders;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 error:(id*)arg3;
+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;
+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 error:(id*)arg3;
+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_coderForKey:(id)arg1;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeRootObjectOfClass:(Class)arg1 error:(id*)arg2;
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id*)arg2;
- (id)initWithCodingPackage:(id)arg1 error:(id*)arg2;
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)package;
- (Class)rootClass;
- (void)setPackage:(id)arg1;
- (void)setRootClass:(Class)arg1;
- (void)setSubcoders:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subcoders;
- (id)userInfo;

@end
