
@interface CDMNluResponse : NSObject <NSSecureCoding> {
    void objcProto;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  swiftProto;
}

@property (nonatomic, retain) SIRINLUEXTERNALCDMNluResponse *objcProto;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjcProto:(id)arg1;
- (id)objcProto;
- (void)setObjcProto:(id)arg1;

@end
