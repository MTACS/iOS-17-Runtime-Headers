
@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder> {
    NSMutableArray * _allowedClassesStack;
    <MSVOPACKDecoderDelegate> * _delegate;
    NSMapTable * _objectLookupTable;
    NSArray * _objects;
    NSDictionary * _userInfo;
    NSMutableArray * _wrapperStack;
}

@property (nonatomic, readonly) NSMutableArray *allowedClassesStack;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSVOPACKDecoderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *objectLookupTable;
@property (nonatomic, readonly) NSArray *objects;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) NSMutableArray *wrapperStack;

+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_decodeNumberForKey:(id)arg1;
- (id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2;
- (void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2;
- (id)allowedClasses;
- (id)allowedClassesStack;
- (bool)allowsKeyedCoding;
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1;
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
- (id)delegate;
- (void)finishDecodingPartialTopLevelObject;
- (id)initForReadingFromData:(id)arg1 error:(id*)arg2;
- (id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)objectLookupTable;
- (id)objects;
- (bool)requiresSecureCoding;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)wrapperStack;

@end
