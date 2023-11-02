
@interface STKClass0SMSSessionData : NSObject <BSXPCCoding> {
    NSString * _address;
    NSString * _body;
    bool  _showsFromAddress;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly, copy) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showsFromAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)body;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBody:(id)arg1 address:(id)arg2 showsFromAddress:(bool)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)showsFromAddress;

@end
