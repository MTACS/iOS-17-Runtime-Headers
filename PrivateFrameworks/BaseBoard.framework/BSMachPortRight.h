
@interface BSMachPortRight : NSObject <BSInvalidatable, BSXPCCoding, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned char  _lock_accessCount;
    unsigned int  _lock_port;
    BOOL  _owner;
    unsigned int  _rawPort;
    NSString * _trace;
    BOOL  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *trace;

+ (BOOL)_type;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)accessPort:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)extractPort;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isUsable;
- (bool)isValid;
- (bool)matchesPortOfRight:(id)arg1;
- (unsigned int)port;
- (unsigned int)rawPort;
- (id)trace;

@end
