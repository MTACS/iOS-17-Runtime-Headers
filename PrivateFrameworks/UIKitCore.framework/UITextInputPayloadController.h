
@interface UITextInputPayloadController : NSObject {
    <UITextInputPayloadDelegate> * _payloadDelegate;
    NSArray * _supportedPayloadIds;
}

@property (nonatomic) <UITextInputPayloadDelegate> *payloadDelegate;
@property (nonatomic, copy) NSArray *supportedPayloadIds;

+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)payloadDelegate;
- (void)setPayloadDelegate:(id)arg1;
- (void)setSupportedPayloadIds:(id)arg1;
- (id)supportedPayloadIds;

@end
