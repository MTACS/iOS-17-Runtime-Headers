
@interface GTCommandBufferIssue : NSObject <NSSecureCoding> {
    NSData * _commandBufferCommitCallstackData;
    unsigned int  _commandBufferCommitCallstackFramesNum;
    NSArray * _faultingEncoders;
    NSString * _metalLogMessage;
}

@property (nonatomic, copy) NSData *commandBufferCommitCallstackData;
@property (nonatomic) unsigned int commandBufferCommitCallstackFramesNum;
@property (nonatomic, copy) NSArray *faultingEncoders;
@property (nonatomic, copy) NSString *metalLogMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandBufferCommitCallstackData;
- (unsigned int)commandBufferCommitCallstackFramesNum;
- (void)encodeWithCoder:(id)arg1;
- (id)faultingEncoders;
- (id)initWithCoder:(id)arg1;
- (id)metalLogMessage;
- (void)setCommandBufferCommitCallstackData:(id)arg1;
- (void)setCommandBufferCommitCallstackFramesNum:(unsigned int)arg1;
- (void)setFaultingEncoders:(id)arg1;
- (void)setMetalLogMessage:(id)arg1;

@end
