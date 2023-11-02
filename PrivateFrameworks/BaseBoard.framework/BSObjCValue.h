
@interface BSObjCValue : NSObject <NSCopying> {
    long long  _argumentIndex;
    NSString * _argumentName;
    bool  _block;
    NSArray * _blockArguments;
    BSObjCValue * _blockReturnValue;
    NSString * _encoding;
    Class  _objectClass;
    NSArray * _objectContainedClasses;
    NSArray * _objectProtocols;
    unsigned long long  _size;
    BOOL  _type;
    BOOL  _typeQualifier;
    NSString * _unqualifiedEncoding;
}

@property (nonatomic, readonly, copy) NSString *encoding;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) BOOL type;
@property (nonatomic, readonly) BOOL typeQualifier;

- (void).cxx_destruct;
- (long long)argumentIndex;
- (id)argumentName;
- (id)blockArguments;
- (id)blockReturnValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)encoding;
- (unsigned long long)hash;
- (bool)isBlock;
- (bool)isBoolean;
- (bool)isEqual:(id)arg1;
- (bool)isFloatingPoint;
- (bool)isObject;
- (bool)isOneWay;
- (bool)isPointer;
- (bool)isStruct;
- (bool)isVoid;
- (bool)isXPCObject;
- (Class)objectClass;
- (id)objectContainedClasses;
- (id)objectProtocols;
- (unsigned long long)size;
- (id)structFlattenedMembers;
- (id)structMembers;
- (id)structName;
- (BOOL)type;
- (BOOL)typeQualifier;

@end
