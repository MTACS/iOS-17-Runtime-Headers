
@interface TRIPBExtensionDescriptor : NSObject <NSCopying> {
    Class  containingMessageClass_;
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
    struct TRIPBExtensionDescription { union { bool x_1_1_1; int x_1_1_2; long long x_1_1_3; unsigned int x_1_1_4; unsigned long long x_1_1_5; float x_1_1_6; double x_1_1_7; id x_1_1_8; id x_1_1_9; id x_1_1_10; int x_1_1_11; } x1; char *x2; char *x3; char *x4; int (*x5)(); int x6; unsigned char x7; unsigned char x8; } * description_;
}

@property (nonatomic, readonly) int alternateWireType;
@property (nonatomic, readonly) Class containingMessageClass;
@property (nonatomic, readonly) unsigned char dataType;
@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) TRIPBEnumDescriptor *enumDescriptor;
@property (nonatomic, readonly) unsigned int fieldNumber;
@property (nonatomic, readonly) Class msgClass;
@property (getter=isPackable, nonatomic, readonly) bool packable;
@property (getter=isRepeated, nonatomic, readonly) bool repeated;
@property (nonatomic, readonly) NSString *singletonName;
@property (nonatomic, readonly) int wireType;

- (int)alternateWireType;
- (long long)compareByFieldNumber:(id)arg1;
- (Class)containingMessageClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)dataType;
- (void)dealloc;
- (id)defaultValue;
- (id)enumDescriptor;
- (unsigned int)fieldNumber;
- (id)initWithExtensionDescription:(struct TRIPBExtensionDescription { union { bool x_1_1_1; int x_1_1_2; long long x_1_1_3; unsigned int x_1_1_4; unsigned long long x_1_1_5; float x_1_1_6; double x_1_1_7; id x_1_1_8; id x_1_1_9; id x_1_1_10; int x_1_1_11; } x1; char *x2; char *x3; char *x4; int (*x5)(); int x6; unsigned char x7; unsigned char x8; }*)arg1;
- (bool)isPackable;
- (bool)isRepeated;
- (Class)msgClass;
- (id)singletonName;
- (const char *)singletonNameC;
- (int)wireType;

@end
