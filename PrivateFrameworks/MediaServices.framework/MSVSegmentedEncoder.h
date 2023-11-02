
@interface MSVSegmentedEncoder : NSCoder {
    bool  _hasFinished;
    MSVSegmentedCodingPackage * _package;
    <MSVSegmentedCoding> * _rootObject;
    NSMutableDictionary * _subcoders;
    NSDictionary * _userInfo;
}

@property (nonatomic) bool hasFinished;
@property (nonatomic, retain) MSVSegmentedCodingPackage *package;
@property (nonatomic, retain) <MSVSegmentedCoding> *rootObject;
@property (nonatomic, retain) NSMutableDictionary *subcoders;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)_coderForKey:(id)arg1;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)finishEncoding;
- (bool)hasFinished;
- (id)initWithCodingPackage:(id)arg1;
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)package;
- (id)rootObject;
- (void)setHasFinished:(bool)arg1;
- (void)setPackage:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)setSubcoders:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subcoders;
- (id)userInfo;

@end
