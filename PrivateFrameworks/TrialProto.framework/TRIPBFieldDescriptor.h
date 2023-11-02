
@interface TRIPBFieldDescriptor : NSObject {
    TRIPBOneofDescriptor * containingOneof_;
    union { 
        bool valueBool; 
        int valueInt32; 
        long long valueInt64; 
        unsigned int valueUInt32; 
        unsigned long long valueUInt64; 
        float valueFloat; 
        double valueDouble; 
        NSData *valueData; 
        NSString *valueString; 
        TRIPBMessage *valueMessage; 
        int valueEnum; 
    }  defaultValue_;
    struct TRIPBMessageFieldDescription { char *x1; union { char *x_2_1_1; int (*x_2_1_2)(); int (*x_2_1_3)(); } x2; unsigned int x3; int x4; unsigned int x5; unsigned short x6; unsigned char x7; } * description_;
    union { 
        TRIPBEnumDescriptor *enumDescriptor_; 
        int (*enumVerifier_)(); 
    }  enumHandling_;
    SEL  getSel_;
    SEL  hasOrCountSel_;
    Class  msgClass_;
    SEL  setHasSel_;
    SEL  setSel_;
}

@property (nonatomic, readonly) TRIPBOneofDescriptor *containingOneof;
@property (nonatomic, readonly) unsigned char dataType;
@property (nonatomic, readonly) union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; } defaultValue;
@property (nonatomic, readonly) TRIPBEnumDescriptor *enumDescriptor;
@property (nonatomic, readonly) unsigned char fieldType;
@property (nonatomic, readonly) bool hasDefaultValue;
@property (nonatomic, readonly) unsigned char mapKeyDataType;
@property (nonatomic, readonly) Class msgClass;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int number;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (getter=isPackable, nonatomic, readonly) bool packable;
@property (getter=isRequired, nonatomic, readonly) bool required;

- (id)containingOneof;
- (unsigned char)dataType;
- (void)dealloc;
- (union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; })defaultValue;
- (id)enumDescriptor;
- (unsigned char)fieldType;
- (bool)hasDefaultValue;
- (id)init;
- (id)initWithFieldDescription:(void*)arg1 includesDefault:(bool)arg2 syntax:(unsigned char)arg3;
- (bool)isOptional;
- (bool)isPackable;
- (bool)isRequired;
- (bool)isValidEnumValue:(int)arg1;
- (unsigned char)mapKeyDataType;
- (Class)msgClass;
- (id)name;
- (unsigned int)number;
- (id)textFormatName;

@end
