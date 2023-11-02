
@interface SFWebpageStatusBarInfoMessage : NSObject <SFWebPageStatusBarMessage> {
    NSString * _message;
}

@property (nonatomic, readonly) NSAttributedString *attributedMessageString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedMessageString;
- (unsigned long long)hash;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;

@end
