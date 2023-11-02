
@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _endpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_endpoint;
- (id)_initWithConnection:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
