
@interface MSVOPACKEncoder : NSCoder <NSObject> {
    NSData * _encodedData;
    bool  _hasFinished;
    NSMapTable * _objectLookupTable;
    NSMutableArray * _objects;
    NSDictionary * _userInfo;
    NSMutableArray * _wrapperStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic) bool hasFinished;
@property (nonatomic, readonly) bool hasTopLevelData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *objectLookupTable;
@property (nonatomic, readonly) NSMutableArray *objects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSMutableArray *wrapperStack;

+ (id)encodedDataWithRootObject:(id)arg1 error:(id*)arg2;
+ (id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_convertNumber:(id)arg1;
- (id)_convertObject:(id)arg1;
- (void)_encodeNumber:(id)arg1 forKey:(id)arg2;
- (bool)allowsKeyedCoding;
- (void)beginEncodingPartialTopLevelObject:(id)arg1;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (id)encodedData;
- (id)encodedDataWithError:(id*)arg1;
- (void)finishEncoding;
- (void)finishEncodingPartialTopLevelObject;
- (bool)finishEncodingWithError:(id*)arg1;
- (bool)hasFinished;
- (bool)hasTopLevelData;
- (id)init;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)objectLookupTable;
- (id)objects;
- (bool)requiresSecureCoding;
- (void)setHasFinished:(bool)arg1;
- (id)userInfo;
- (id)wrapperStack;

@end
