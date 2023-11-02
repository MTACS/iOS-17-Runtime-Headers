
@interface TIDescriptorParser : NSObject {
    NSMutableDictionary * _context;
    long long  _errorCode;
}

@property (nonatomic, readonly) NSMutableDictionary *context;
@property (nonatomic, readonly) long long errorCode;

- (void).cxx_destruct;
- (id)boxNilForValue:(id)arg1;
- (id)context;
- (long long)errorCode;
- (id)errorWithDetails:(id)arg1;
- (id)errorWithMessage:(id)arg1;
- (id)errorWithMessage:(id)arg1 andValue:(id)arg2;
- (id)initWithErrorCode:(long long)arg1;
- (id)invalidDataTypeErrorForKey:(id)arg1 withValue:(id)arg2 dataType:(id)arg3;
- (id)invalidValueErrorForKey:(id)arg1 withValue:(id)arg2;
- (id)missingValueErrorForKey:(id)arg1;
- (id)parseArrayForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseBooleanForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseDictionaryForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseFloatForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseIntegerForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseNumberForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)parseObjectForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4 validate:(id /* block */)arg5;
- (id)parseStringForKey:(id)arg1 fromConfig:(id)arg2 required:(bool)arg3 errors:(id)arg4;

@end
