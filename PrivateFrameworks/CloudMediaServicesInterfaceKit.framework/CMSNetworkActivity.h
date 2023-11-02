
@interface CMSNetworkActivity : NSObject <NSSecureCoding> {
    bool  _completed;
    unsigned int  _label;
    NSObject<OS_nw_activity> * _nwActivity;
}

@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, readonly) NSObject<OS_nw_activity> *nwActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)associateWithTask:(id)arg1;
- (void)completeActivity:(int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(unsigned int)arg1 parentActivity:(id)arg2;
- (id)initWithLabel:(unsigned int)arg1 parentUUID:(id)arg2;
- (id)initWithRetry:(id)arg1;
- (unsigned int)label;
- (id)nwActivity;

@end
