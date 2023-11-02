
@interface STKTextSessionData : NSObject <BSXPCCoding> {
    NSString * _simLabel;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *simLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithText:(id)arg1 simLabel:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)simLabel;
- (id)text;

@end
