
@interface SidecarStream : NSObject <NSSecureCoding> {
    _Atomic bool  _activated;
    id /* block */  _handler;
    NSString * _identifier;
    RPStreamSession * _rapportStream;
    SidecarSession * _session;
    _Atomic unsigned long long  _status;
}

@property (readonly) long long fileDescriptor;
@property (readonly) unsigned long long flags;
@property (copy) id /* block */ handler;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; } nwClientID;
@property (readonly) RPStreamSession *rapportStream;
@property (readonly) SidecarSession *session;
@property (readonly) unsigned long long status;
@property (nonatomic, readonly) long long transport;
@property (readonly) long long type;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileDescriptor;
- (unsigned long long)flags;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 rapportStream:(id)arg2;
- (void)invalidate;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })nwClientID;
- (id)rapportStream;
- (void)sendOPACK:(id)arg1 completion:(id /* block */)arg2;
- (id)session;
- (void)setHandler:(id /* block */)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (long long)transport;
- (long long)type;

@end
