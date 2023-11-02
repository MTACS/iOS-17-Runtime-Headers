
@interface STKSessionBehavior : NSObject <BSXPCCoding> {
    bool  _dismissesAfterUserEvent;
    bool  _shouldSendResponseUponDisplay;
    double  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dismissesAfterUserEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldSendResponseUponDisplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;

- (bool)dismissesAfterUserEvent;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)shouldSendResponseUponDisplay;
- (double)timeout;

@end
