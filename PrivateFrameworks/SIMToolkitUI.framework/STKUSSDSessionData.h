
@interface STKUSSDSessionData : NSObject <BSXPCCoding> {
    bool  _allowsResponse;
    NSString * _text;
}

@property (nonatomic, readonly) bool allowsResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (bool)allowsResponse;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 allowsResponse:(bool)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)text;

@end
