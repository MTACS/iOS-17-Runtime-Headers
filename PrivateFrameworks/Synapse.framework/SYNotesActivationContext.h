
@interface SYNotesActivationContext : NSObject <NSSecureCoding> {
    unsigned int  _contextID;
    BSProcessHandle * _processHandle;
    unsigned long long  _renderID;
    NSData * _userActivityData;
}

@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (nonatomic, readonly) unsigned long long renderID;
@property (nonatomic, readonly, copy) NSData *userActivityData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)contextID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivityData:(id)arg1 contextID:(unsigned int)arg2 renderID:(unsigned long long)arg3;
- (id)processHandle;
- (unsigned long long)renderID;
- (id)userActivityData;

@end
