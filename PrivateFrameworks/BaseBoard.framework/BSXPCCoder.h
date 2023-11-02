
@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCDecoding, BSXPCEncoding, BSXPCSecureCoding> {
    NSKeyedArchiver * _archiver;
    NSObject<OS_xpc_object> * _codingContext;
    int  _finalized;
    NSObject<OS_xpc_object> * _message;
    NSKeyedUnarchiver * _unarchiver;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *XPCConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *message;
@property (readonly) Class superclass;

+ (id)_testEncodeAndDecodeObject:(id)arg1 ofClass:(Class)arg2;
+ (id)coder;
+ (id)coderWithMessage:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)XPCConnection;
- (id)_finishCoding;
- (id)_implicitDecodeXPCObjectForKey:(id)arg1;
- (void)_removeValueForKey:(id)arg1;
- (bool)containsValueForKey:(id)arg1;
- (id)createMessage;
- (void)dealloc;
- (bool)decodeBoolForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeDictionaryOfClass:(Class)arg1 forKey:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeStringForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeDictionary:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
