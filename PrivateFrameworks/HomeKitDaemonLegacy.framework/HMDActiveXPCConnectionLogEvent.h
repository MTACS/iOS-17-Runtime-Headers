
@interface HMDActiveXPCConnectionLogEvent : HMMLogEvent {
    bool  _activated;
    bool  _added;
    NSString * _name;
}

@property (getter=isActivated, readonly) bool activated;
@property (readonly) bool added;
@property (nonatomic, readonly) NSString *name;

+ (id)initWithNewXPCConnectionAdded:(id)arg1;
+ (id)initWithXPCConnectionRemoved:(id)arg1;

- (void).cxx_destruct;
- (bool)added;
- (id)initWithXPCConnection:(id)arg1 added:(bool)arg2;
- (bool)isActivated;
- (id)name;

@end
