
@interface GTFaultingEncoder : NSObject <NSSecureCoding> {
    NSData * _cpuCallstackData;
    unsigned int  _cpuCallstackFramesNum;
    NSString * _metalLogMessage;
}

@property (nonatomic, copy) NSData *cpuCallstackData;
@property (nonatomic) unsigned int cpuCallstackFramesNum;
@property (nonatomic, copy) NSString *metalLogMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cpuCallstackData;
- (unsigned int)cpuCallstackFramesNum;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metalLogMessage;
- (void)setCpuCallstackData:(id)arg1;
- (void)setCpuCallstackFramesNum:(unsigned int)arg1;
- (void)setMetalLogMessage:(id)arg1;

@end
