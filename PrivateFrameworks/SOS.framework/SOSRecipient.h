
@interface SOSRecipient : NSObject {
    NSString * _handle;
    unsigned long long  _reasons;
}

@property (nonatomic, copy) NSString *handle;
@property (nonatomic) unsigned long long reasons;

+ (id)handlesFromRecipients:(id)arg1;
+ (id)reasonsDictionaryFromRecipients:(id)arg1;

- (void).cxx_destruct;
- (id)handle;
- (unsigned long long)reasons;
- (void)setHandle:(id)arg1;
- (void)setReasons:(unsigned long long)arg1;

@end
